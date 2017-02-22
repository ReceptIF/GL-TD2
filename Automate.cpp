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
    Lexer lexer("(1+2*5)*4$");
    do {	    
      	Symbole * s = lexer.getNext(this->eat);
  	    this->eat = true;
  	    e->transition(this,s);
  	    e = statestack.back();
  	    i++;	    
    } while(i<50);

    cout << symbolstack[0]->getValeur() << endl;
}

void Automate::decalage(Symbole * s, Etat * e) {
	  symbolstack.push_back(s);
	  statestack.push_back(e);
}

void Automate::reduction(int n, Symbole * s) {
	  vector<Symbole *> toCalculate;

  	for(int i=0;i<n;i++) {
   	   	delete(statestack.back());
    	  statestack.pop_back();
   	 	  toCalculate.push_back(symbolstack.back());
    	  symbolstack.pop_back();
  	}

    // Evaluation de l'expresssion
  	int result;
  	if(toCalculate.size()==1) {
  		result = toCalculate[0]->getValeur();
  	} else {
  		if(*toCalculate[2]==OUVREPAR) {
        result = toCalculate[1]->getValeur();
      }
      else if(*toCalculate[1]==PLUS) {
        int a = toCalculate[0]->getValeur();
        int b = toCalculate[2]->getValeur();
  			result = a+b;
  		} else {
        int a = toCalculate[0]->getValeur();
        int b = toCalculate[2]->getValeur();
  			result = a*b;
  		}
  	}

    Etat* e = statestack.back();
  	e->transition(this,new Expr(result));

  	this->eat = false;
}

Automate::~Automate() {
}
