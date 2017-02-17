//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E4.h"
#include "E3.h"
#include "E2.h"
#include "E7.h"
#include "Automate.h"

E4::E4(const string name) : Etat(name) {

}

E4::~E4() {

}

void E4::print() const {
    Etat::print();
}

bool E4::transition(Automate *automate, Symbole *s) {
    
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
        printTransition("EXPR","décalage","etat7");
        automate->decalage(s, new E7("etat7"));
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
