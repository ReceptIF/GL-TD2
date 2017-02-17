//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E0.h"
#include "E1.h"
#include "Automate.h"

E0::E0(const string name) : Etat(name) {

}

E0::~E0() {

}

void E0::print() const {
    Etat::print();
}

bool E0::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case EXPR:
        printTransition("EXPR","décalage","etat1");
        automate->decalage(s, new E1("etat1"));
        break;
      /*case OUVREPAR:
        printTransition("OUVREPAR","décalage","etat2");
        automate->decalage(s, new E2("etat2"));
        break;
      case NOMBRE:
        printTransition("NOMBRE","décalage","etat3");
        automate->decalage(s, new E3("etat3"));
        break;*/
      default:
        cout << "Caractère non reconnu" << endl;
    }
    
    return true;
}
