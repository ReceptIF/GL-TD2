#include "E7.h"

E7::E7(const string name) : Etat(name) {

}

E7::~E7() {

}

void E7::print() const {
    Etat::print();
}

bool E7::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
        case PLUS :
            automate.reduction(s, new E2);
            break;
        case MULT :
            automate.decalage(s, new E5);
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(s, new E2);
            break;
        case EXPR :
        case EOF :
            automate.reduction(s, new E2);
            break;
        default:
            break;
    }
    return false;
}
