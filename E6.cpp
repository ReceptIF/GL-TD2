//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E6.h"

E6::E6(const string name) : Etat(name) {

}

E6::~E6() {

}

void E6::print() const {
    Etat::print();
}

bool E6::transition(Automate &automate, Symbole *s) {
    return false;
}
