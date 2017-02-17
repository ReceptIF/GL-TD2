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
            automate.reduction(7, new Expr());
            break;
        case MULT :
            automate.decalage(s, new E5);
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(7, new Expr());
            break;
        case EXPR :
        case EOF :
            automate.reduction(7, new Expr());
            break;
        default:
            break;
    }
    return false;
}
