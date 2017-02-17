#include "E3.h"
#include "Expr.h"
#include "Automate.h"

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
            automate.reduction(1, new Expr());
            break;
        case MULT :
            automate.reduction(1, new Expr());
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(1, new Expr());
            break;
        case EXPR :
        case ENDOFFILE :
            automate.reduction(1, new Expr());
            break;
        default:
            break;
    }
    return false;
}
