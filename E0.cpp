#include "E0.h"

E0::E0(const string name) : Etat(name) {

}

E0::~E0() {

}

void E0::print() const {
    Etat::print();
}

bool E0::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
            automate.decalage(s, new E3);
            break;
        case PLUS :
        case MULT :
        case OUVREPAR :
            automate.decalage(s, new E2);
            break;
        case FERMEPAR :
        case EXPR :
        case EOF :
        default:
            break;
    }
    return false;
}
