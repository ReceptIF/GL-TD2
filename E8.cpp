#include "E8.h"

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
        case PLUS :
        case MULT :
        case OUVREPAR :
        case FERMEPAR :
        case EXPR :
        case EOF :
        default:
            break;
    }
    return false;
}
