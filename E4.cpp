#include "E4.h"
#include "E2.h"
#include "E3.h"
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
            automate.decalage(s, new E3("Etat 3"));
            break;
        case PLUS :
        case MULT :
        case OUVREPAR :
            automate.decalage(s, new E2("Etat 2"));
            break;
        case FERMEPAR :
        case EXPR :
        case EOF :
        default:
            break;
    }
    return false;
}
