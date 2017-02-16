//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E1.h"


E1::E1(const string name) : Etat(name) {

}

E1::~E1() {

}

void E1::print() const {
    Etat::print();
}

bool E1::transition(Automate &automate, Symbole *s) {
    return false;
}
