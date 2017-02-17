//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Automate.h"
#include "Etat.h"
#include "E0.h"

Automate::Automate(string chaine) {
  lexer = new Lexer(chaine);
  
  Etat *etat0 = new E0("etat0");
  statestack.push_back(etat0);
}

void Automate::eval() 
{
  bool retourTransition = true;
  while(retourTransition)
  {
    Symbole *symbole = lexer->getNext(true);
    retourTransition = statestack.back()->transition(this, symbole);
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
  lexer->putSymbol(s);
}

Automate::~Automate() {
  delete lexer;
}
