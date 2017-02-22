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
    Lexer lexer("1+2*3$");
    do {	    
    	Symbole * s = lexer.getNext(this->eat);
	    this->eat = true;
	    e->transition(this,s);
	    //cout << statestack.back()->getName()<<endl;
	    e = statestack.back();
	    i++;
	    
	  	for(int i=0; i<symbolstack.size(); i++) {
	  		cout << *symbolstack[i] << endl;
	  	}
    } while(i<18);
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
  	Etat* e = statestack.back();
  	*s=EXPR;
	//symbolstack.push_back(s);
  	e->transition(this,s);

  	this->eat = false;
}

Automate::~Automate() {
}
