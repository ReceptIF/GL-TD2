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
            automate.reduction(s, new E3);
            break;
        case MULT :
            automate.reduction(s, new E3);
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(s, new E3);
            break;
        case EXPR :
        case EOF :
            automate.reduction(s, new E3);
            break;
        default:
            break;
    }
    return false;
}
