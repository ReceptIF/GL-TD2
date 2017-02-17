//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Etat.h"

Etat::Etat(const string &name) : name(name) {}

void Etat::printTransition(string symbole, string action, string etat) {
  cout << "-" << symbole << " reconnue, " << action << " vers " << etat << endl;
}

Etat::~Etat() {

}

void Etat::print() const {
  cout << "* Etat courant : " << this->name << endl;
}
