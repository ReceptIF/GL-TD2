//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E6.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"
#include "Automate.h"

E6::E6(const string name) : Etat(name) {

}

E6::~E6() {

}

void E6::print() const {
    Etat::print();
}

bool E6::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case PLUS:
        printTransition("PLUS","décalage","etat4");
        automate->decalage(s, new E4("etat4"));
        break;
      case MULT:
        printTransition("MULT","décalage","etat5");
        automate->decalage(s, new E5("etat5"));
        break;
      case FERMEPAR:
        printTransition("FERMEPAR","décalage","etat9");
        automate->decalage(s, new E9("etat9"));
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
