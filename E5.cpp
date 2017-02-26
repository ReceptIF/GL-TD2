#include "E5.h"
#include "E2.h"
#include "E3.h"
#include "E8.h"
#include "Automate.h"

E5::E5(const string name) : Etat(name) {

}

E5::~E5() {

}

void E5::print() const {
    Etat::print();
}

bool E5::transition(Automate &automate, Symbole *s) {
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
            automate.decalage(s, new E8("E8"));
            break;
        case ENDOFFILE :
            automate.error = true;
            break;
        default:
            break;
    }
    return false;
}
