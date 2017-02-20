#include "E4.h"
#include "E2.h"
#include "E3.h"
#include "E7.h"
#include "Automate.h"

E4::E4(const string name) : Etat(name) {

}

E4::~E4() {

}

void E4::print() const {
    Etat::print();
}

bool E4::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
            automate.decalage(s, new E3("E3"));
            break;
        case PLUS :
        case MULT :
        case OUVREPAR :
            automate.decalage(s, new E2("E2"));
            break;
        case FERMEPAR :
        case EXPR :
            automate.decalage(s, new E7("E7"));
            break;
        case ENDOFFILE :
        default:
            break;
    }
    return false;
}
