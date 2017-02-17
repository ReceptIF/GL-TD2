//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E8.h"
#include "Expr.h"
#include "Automate.h"
#include "Plus.h"
#include "Mult.h"
#include "FermePar.h"
#include "OuvrePar.h"
#include "FinDeTexte.h"

E8::E8(const string name) : Etat(name) {

}

E8::~E8() {

}

void E8::print() const {
    Etat::print();
}

bool E8::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case PLUS:
        printTransition("PLUS","réduction","3");
        automate->reduction(3, new Plus());
        break;
      case MULT:
        printTransition("MULT","réduction","3");
        automate->reduction(3, new Mult());
        break;
      case FERMEPAR:
        printTransition("FERMEPAR","réduction","3");
        automate->reduction(3, new FermePar());
        break;
      case FINDETEXTE:
        printTransition("FINDETEXTE","réduction","3");
        automate->reduction(3, new FinDeTexte());
        break;
      default:
        cout << "Caractère non reconnu" << endl;
        return false;
    }
    
    return true;
}
