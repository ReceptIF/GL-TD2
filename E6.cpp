#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"
#include "Automate.h"

E6::E6(const string name) : Etat(name) {

}

E6::~E6() {

}

void E6::print() const {
    Etat::print();
}

bool E6::transition(Automate &automate, Symbole *s) {
    switch (*s) {
        case NOMBRE :
        case PLUS :
            automate.decalage(s, new E4("E4"));
            break;
        case MULT :
            automate.decalage(s, new E5("E5"));
            break;
        case OUVREPAR :
        case FERMEPAR :
            automate.decalage(s, new E9("E9"));
            break;
        case EXPR :
        case ENDOFFILE :
        default:
            break;
    }
    return false;
}
