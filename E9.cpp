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
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            reductionR4(automate);
            break;
        case MULT :
            reductionR4(automate);
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            reductionR4(automate);
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            reductionR4(automate);
            break;
        default:
            break;
    }
    return false;
}

void E9::reductionR4(Automate & automate){
    delete (automate.symbolstack.back());
    automate.symbolstack.pop_back();
    int val = automate.symbolstack.back()->eval();
    delete (automate.symbolstack.back());
    automate.symbolstack.pop_back();
    delete (automate.symbolstack.back());
    automate.symbolstack.pop_back();
    automate.reduction(3, new Expr(val));
}
