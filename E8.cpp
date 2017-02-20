#include "E8.h"
#include "Expr.h"
#include "Automate.h"
#include "Symbole.h"

E8::E8(const string name) : Etat(name) {

}

E8::~E8() {

}

void E8::print() const {
    Etat::print();
}

bool E8::transition(Automate &automate, Symbole *s) {
    Symbole * exprD;
    Symbole * exprG;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(exprG->eval()*exprD->eval()));
            break;
        case MULT :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(exprG->eval()*exprD->eval()));
            break;
        case OUVREPAR :
        case FERMEPAR :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(exprG->eval()*exprD->eval()));
            break;
        case EXPR :
        case ENDOFFILE :
            exprD = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.symbolstack.pop_back();
            exprG = automate.symbolstack.back();
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(exprG->eval()*exprD->eval()));
            break;
        default:
            break;
    }
    return false;
}
