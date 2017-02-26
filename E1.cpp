#include "E1.h"
#include "E4.h"
#include "E5.h"
#include "Automate.h"


E1::E1(const string name) : Etat(name) {

}

E1::~E1() {

}

void E1::print() const {
    Etat::print();
}

bool E1::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
            automate.error = true;
            break;
        case PLUS :
            automate.decalage(s, new E4("E4"));
            break;
        case MULT :
            automate.decalage(s, new E5("E5"));
            break;
        case OUVREPAR :
            automate.error = true;
            break;
        case FERMEPAR :
            automate.error = true;
            break;
        case EXPR :
            automate.error = true;
            break;
        case ENDOFFILE :
            automate.accepted = true;
        default:
            break;
    }
    return false;
}
