//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E5.h"
#include "E3.h"
#include "E2.h"
#include "E8.h"
#include "Automate.h"

E5::E5(const string name) : Etat(name) {

}

E5::~E5() {

}

void E5::print() const {
    Etat::print();
}

bool E5::transition(Automate *automate, Symbole *s) {
    
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
        printTransition("EXPR","décalage","etat8");
        automate->decalage(s, new E8("etat8"));
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
