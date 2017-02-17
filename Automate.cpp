//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Automate.h"
#include "Lexer.h"
#include "E0.h"

Automate::Automate() {
}

void Automate::lecture() {
	Etat *e = new E0("E0");
    Lexer lexer("2");
    while(lexer.getChaine().size() > 0) {
	    Symbole s = lexer.getNext(true);
	    e->transition(this,&s);
	    e = statestack.back();
    }
}

void Automate::decalage(Symbole * s, Etat * e) {
  symbolstack.push_back(s);
  statestack.push_back(e);
}

void Automate::reduction(int n, Symbole * s) {
  for(int i=0;i<n;i++) {
    delete(statestack.back());
    statestack.pop_back();
  }
 // lexer->putSymbol(s);
}

Automate::~Automate() {
//  delete lexer;
}
