#include "E9.h"

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
        case PLUS :
            automate.reduction(4, new Expr());
            break;
        case MULT :
            automate.reduction(4, new Expr());
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(4, new Expr());
            break;
        case EXPR :
        case EOF :
            automate.reduction(4, new Expr());
            break;
        default:
            break;
    }
    return false;
}
