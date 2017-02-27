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
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            reductionR3(automate);
            break;
        case MULT :
            reductionR3(automate);
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            reductionR3(automate);
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            reductionR3(automate);
            break;
        default:
            break;
    }
    return false;
}

void E8::reductionR3(Automate & automate){
    int valD = automate.symbolstack.back()->eval();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    int valG = automate.symbolstack.back()->eval();
    delete(automate.symbolstack.back());
    automate.symbolstack.pop_back();
    automate.reduction(3, new Expr(valG*valD));
}