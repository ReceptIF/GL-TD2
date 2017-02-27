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
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            reductionR2(automate);
            break;
        case MULT :
            automate.decalage(s, new E5("E5"));
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            reductionR2(automate);
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            reductionR2(automate);
            break;
        default:
            break;
    }
    return false;
}

void E7::reductionR2(Automate & automate){
    int valD = automate.symbolstack.back()->eval();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    int valG = automate.symbolstack.back()->eval();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    automate.reduction(3, new Expr(valG+valD));
}