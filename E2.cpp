#include "E2.h"
#include "E3.h"
#include "Automate.h"

E2::E2(const string name) : Etat(name) {

}

E2::~E2() {

}

void E2::print() const {
    Etat::print();
}

bool E2::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
            automate.decalage(s, new E3("Etat E3"));
            break;
        case PLUS :
        case MULT :
        case OUVREPAR :
            automate.decalage(s, new E2("Etat 2"));
            break;
        case FERMEPAR :
        case EXPR :
        case ENDOFFILE :
        default:
            break;
    }
    return false;
}
