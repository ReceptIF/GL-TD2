#include "E2.h"

E2::E2(const string name) : Etat(name) {

}

E2::~E2() {

}

void E2::print() const {
    Etat::print();
}

bool E2::transition(Automate &automate, Symbole *s) {
    return false;
}
