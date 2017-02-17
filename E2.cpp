//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E2.h"
#include "E3.h"
#include "E6.h"
#include "Automate.h"

E2::E2(const string name) : Etat(name) {

}

E2::~E2() {

}

void E2::print() const {
    Etat::print();
}

bool E2::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case NOMBRE:
        printTransition("NOMBRE","décalage","etat3");
        automate->decalage(s, new E3("etat3"));
        break;
      case OUVREPAR:
        printTransition("OUVREPAR","décalage","etat2");
        automate->decalage(s, new E2("etat2"));
        break;
      case EXPR:
        printTransition("EXPR","décalage","etat6");
        automate->decalage(s, new E6("etat6"));
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
