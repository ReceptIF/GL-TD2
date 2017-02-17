//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Automate.h"
#include "Lexer.h"
#include "E0.h"

Automate::Automate() {
	this->eat = true;
	this->end = true;
}

void Automate::lecture() {
	Etat *e = new E0("E0");
	statestack.push_back(e);
	int i = 0;
    Lexer lexer("2+2*2$");
    do {
	    Symbole s = lexer.getNext(this->eat);
	    this->eat = true;
	    e->transition(this,&s);
	    //cout << statestack.back()->getName()<<endl;
	    e = statestack.back();
	    i++;
    } while(i<15);
}

void Automate::decalage(Symbole * s, Etat * e) {
  symbolstack.push_back(s);
  statestack.push_back(e);
	 //   cout << statestack.back()->getName()<<endl;
}

void Automate::reduction(int n, Symbole * s) {
  /*for(int i = 0; i<statestack.size();i++) {
  	cout << statestack[i]->getName() << endl;
  }*/
  //cout << n << endl;
  for(int i=0;i<n;i++) {
    delete(statestack.back());
    statestack.pop_back();
  }
  Etat* e = statestack.back();
  *s=EXPR;
  e->transition(this,s);

  this->eat = false;
}

Automate::~Automate() {
//  delete lexer;
}
