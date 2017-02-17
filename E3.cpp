#include "E3.h"

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
        case PLUS :
            automate.reduction(s, new E5);
            break;
        case MULT :
            automate.reduction(s, new E5);
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(s, new E5);
            break;
        case EXPR :
        case EOF :
            automate.reduction(s, new E5);
            break;
        default:
            break;
    }
    return false;
}
