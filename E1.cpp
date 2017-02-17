//
// Created by Olivier VICENTE on 16/02/2017.
//

#include "E1.h"
#include "E5.h"
#include "E4.h"
#include "Automate.h"


E1::E1(const string name) : Etat(name) {

}

E1::~E1() {

}

void E1::print() const {
    Etat::print();
}

bool E1::transition(Automate *automate, Symbole *s) {
    
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
      case FINDETEXTE:
        printTransition("FINDETEXTE","accepter","on sait pas où");
        return false;
        break;
      default:
        cout << "Caractère non reconnu : " << s->avoirJeton() << endl;
        return false;
    }
    
    return true;
}
