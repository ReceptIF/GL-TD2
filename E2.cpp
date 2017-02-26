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
            automate.decalage(s, new E3("E3"));
            break;
        case PLUS :
            automate.error = true;
            break;
        case MULT :
            automate.error = true;
            break;
        case OUVREPAR :
            automate.decalage(s, new E2("E2"));
            break;
        case FERMEPAR :
            automate.error = true;
            break;
        case EXPR :
            automate.decalage(s, new E6("E6"));
            break;
        case ENDOFFILE :
            automate.error = true;
            break;
        default:
            break;
    }
    return false;
}
