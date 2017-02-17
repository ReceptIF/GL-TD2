//
// Created by Olivier VICENTE on 16/02/2017.
//

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
        case VARIABLE :
        case PLUS :
        case MULT :
        case EXPR :
        case OUVREPAR :
            automate.decalage(s, new E2);
            break;
        case FERMEPAR :
        default:
            break;
    }
    return false;
}
