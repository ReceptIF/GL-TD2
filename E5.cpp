#include "E5.h"

E5::E5(const string name) : Etat(name) {

}

E5::~E5() {

}

void E5::print() const {
    Etat::print();
}

bool E5::transition(Automate &automate, Symbole *s) {
    return false;
}
