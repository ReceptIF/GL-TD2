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
            automate.reduction(3, new Expr());
            break;
        case MULT :
            automate.reduction(3, new Expr());
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(3, new Expr());
            break;
        case EXPR :
        case EOF :
            automate.reduction(3, new Expr());
            break;
        default:
            break;
    }
    return false;
}
