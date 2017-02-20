#include "E9.h"
#include "Expr.h"
#include "Automate.h"

E9::E9(const string name) : Etat(name) {

}

E9::~E9() {

}

void E9::print() const {
    Etat::print();
}

bool E9::transition(Automate &automate, Symbole *s) {
    Symbole * expr;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            automate.symbolstack.pop_back();
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(expr->eval()));
            break;
        case MULT :
            automate.symbolstack.pop_back();
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(expr->eval()));
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.symbolstack.pop_back();
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(expr->eval()));
            break;
        case EXPR :
        case ENDOFFILE :
            automate.symbolstack.pop_back();
            expr = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(expr->eval()));
            break;
        default:
            break;
    }
    return false;
}
