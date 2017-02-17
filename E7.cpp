#include "E7.h"
#include "Expr.h"
#include "E5.h"
#include "Automate.h"

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
            automate.reduction(3, new Expr());
            break;
        case MULT :
            automate.decalage(s, new E5("Etat 5"));
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.reduction(3, new Expr());
            break;
        case EXPR :
        case ENDOFFILE :
            automate.reduction(3, new Expr());
            break;
        default:
            break;
    }
    return false;
}
