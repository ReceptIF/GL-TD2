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
  
  cout << "Fin de la lecture" << endl;
  for(int i=0;i<symbolstack.size();++i)
    cout << symbolstack[i]->eval() << endl;
}

void Automate::decalage(Symbole * s, Etat * e) {
  symbolstack.push_back(s);
  statestack.push_back(e);
}

void Automate::reduction(int n, Symbole * s) {
  
  vector<Symbole *> poped;
  
  for(int i=0;i<n;i++) {
    delete(statestack.back());
    statestack.pop_back();
    poped.push_back(symbolstack.back());
    symbolstack.pop_back();
  }
  
  int val = calcul(poped);
  cout << "Evaluation de la réduction : " << val << endl;
  
  statestack.back()->transition(this, new Expr(val));
  lexer->putSymbol(s);
}

int Automate::calcul(vector<Symbole *> tab) {
  
  switch(tab.size()) {
    case 1:
      return tab.back()->eval();
      break;
    case 3:
      if(tab[0]->avoirJeton() == OUVREPAR) {
        return tab[1]->eval();
      }
      else if(tab[1]-> avoirJeton() == PLUS) {
        return tab[0]->eval() + tab[2]->eval();
      }
      break;
  }
  
  return 0;
  
}

Automate::~Automate() {
  delete lexer;
}
