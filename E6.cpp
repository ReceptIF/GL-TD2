#include "E6.h"

E6::E6(const string name) : Etat(name) {

}

E6::~E6() {

}

void E6::print() const {
    Etat::print();
}

bool E6::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
        case PLUS :
            automate.decalage(s, new E4);
            break;
        case MULT :
            automate.decalage(s, new E5);
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.decalage(s, new E9);
            break;
        case EXPR :
        case EOF :
        default:
            break;
    }
    return false;
}
