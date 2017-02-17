//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E3.h"
#include "Expr.h"
#include "Automate.h"
#include "Plus.h"
#include "Mult.h"
#include "FermePar.h"
#include "OuvrePar.h"
#include "FinDeTexte.h"

E3::E3(const string name) : Etat(name) {

}

E3::~E3() {

}

void E3::print() const {
    Etat::print();
}

bool E3::transition(Automate *automate, Symbole *s) {
    
    this->print();
    
    switch(*s) {
      case PLUS:
        printTransition("PLUS","reduction","1");
        automate->reduction(1, new Plus());
        break;
      case MULT:
        printTransition("MULT","reduction","1");
        automate->reduction(1, new Mult());
        break;
      case FERMEPAR:
        printTransition("FERMEPAR","reduction","1");
        automate->reduction(1, new FermePar());
        break;
      case FINDETEXTE:
        printTransition("FINDETEXTE","reduction","1");
        automate->reduction(1, new FinDeTexte);
        break;
      default:
        this->printCharInconnu();
        return false;
    }
    
    return true;
}
