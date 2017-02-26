#include "E7.h"
#include "Expr.h"
#include "E5.h"
#include "Automate.h"

E7::E7(const string name) : Etat(name) {

}

E7::~E7() {

}

void E7::print() const {
    Etat::print();
}

bool E7::transition(Automate &automate, Symbole *s) {
    int valD;
    int valG;
    switch (*s) {
        case NOMBRE :
        case PLUS :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG+valD));
            break;
        case MULT :
            automate.decalage(s, new E5("E5"));
            break;
        case OUVREPAR :
        case FERMEPAR :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG+valD));
            break;
        case EXPR :
        case ENDOFFILE :
            valD = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            valG = automate.symbolstack.back()->eval();
            delete(automate.symbolstack.back());
            automate.symbolstack.pop_back();
            automate.reduction(3, new Expr(valG+valD));
            break;
        default:
            break;
    }
    return false;
}
