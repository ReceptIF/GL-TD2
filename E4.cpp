//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E4.h"

E4::E4(const string name) : Etat(name) {

}

E4::~E4() {

}

void E4::print() const {
    Etat::print();
}

bool E4::transition(Automate &automate, Symbole *s) {
    return false;
}
