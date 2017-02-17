//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E9.h"
#include "Expr.h"
#include "Automate.h"

E9::E9(const string name) : Etat(name) {

}

E9::~E9() {

}

void E9::print() const {
    Etat::print();
}

bool E9::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case PLUS:
        printTransition("PLUS","réduction","3");
        automate->reduction(3,new Expr());
        break;
      case MULT:
        printTransition("MULT","réduction","3");
        automate->reduction(3,new Expr());
        break;
      case FERMEPAR:
        printTransition("FERMEPAR","réduction","3");
        automate->reduction(3,new Expr());
        break;
      case FINDETEXTE:
        printTransition("FINDETEXTE","réduction","3");
        automate->reduction(3,new Expr());
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
