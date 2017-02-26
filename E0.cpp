#include "E0.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"
#include "Automate.h"

E0::E0(const string name) : Etat(name) {

}

E0::~E0() {

}

void E0::print() const {
    Etat::print();
}

bool E0::transition(Automate &automate, Symbole *s) {
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
            automate.decalage(s, new E1("E1"));
            break;
        case ENDOFFILE :
            automate.error = true;
            break;
        default:
            break;
    }
    return false;
}
