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
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            reductionR5(automate);
            break;
        case MULT :
            reductionR5(automate);
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            reductionR5(automate);
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            reductionR5(automate);
            break;
        default:
            break;
    }
    return false;
}

void E3::reductionR5(Automate & automate){
    int val = automate.symbolstack.back()->eval();
    delete (automate.symbolstack.back());
    automate.symbolstack.pop_back();
    automate.reduction(1, new Expr(val));
}
