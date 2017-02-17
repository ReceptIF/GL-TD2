#include "E2.h"
#include "E3.h"
#include "E6.h"
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
            automate.decalage(s, new E3("Etat 3"));
            break;
        case PLUS :
        case MULT :
        case OUVREPAR :
            automate.decalage(s, new E2("Etat 2"));
            break;
        case FERMEPAR :
        case EXPR :
            automate.decalage(s, new E6("Etat 6"));
            break;
        case ENDOFFILE :
        default:
            break;
    }
    return false;
}
