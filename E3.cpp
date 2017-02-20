#include "E3.h"
#include "Expr.h"
#include "Automate.h"

E3::E3(const string name) : Etat(name) {

}

E3::~E3() {

}

void E3::print() const {
    Etat::print();
}

bool E3::transition(Automate &automate, Symbole *s) {
    Symbole * expr;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(expr->eval()));
            break;
        case MULT :
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(expr->eval()));
            break;
        case OUVREPAR :
        case FERMEPAR :
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(expr->eval()));
            break;
        case EXPR :
        case ENDOFFILE :
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(1, new Expr(expr->eval()));
            break;
        default:
            break;
    }
    return false;
}
