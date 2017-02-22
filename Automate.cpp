//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Automate.h"
#include "Lexer.h"
#include "E0.h"

Automate::Automate() {
	this->eat = true;
}

void Automate::lecture() {
  	Etat *e = new E0("E0");
  	statestack.push_back(e);
  	bool end = false;
    Symbole * s;
    string chaine = "1+(2 *4)";
    Lexer lexer(chaine+'$');
    do {	
        if(!this->eat) {
          lexer.putSymbol(s);
        }
        this->eat = true;
      	s = lexer.getNext();
        if(s!=NULL) {
      	    end = e->transition(this,s);
      	    e = statestack.back();
        }
    } while(!end);

    // If the calcul was succesful
    if(e->getName().compare("E1") == 0 && *s==7) {
        cout << "--------------------------------" << endl;
        cout << chaine << " = " << symbolstack[0]->getValeur() << endl;
        cout << "--------------------------------" << endl;
    } else {
        cout << "Error" << endl;
    }
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
