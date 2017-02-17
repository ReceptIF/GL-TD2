//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

Lexer::Lexer() {
  chaine = "\0";
}

void Lexer::putSymbol(Symbole * s) {
  
  //TODO: this.
  
}

Symbole Lexer::getNext(bool eat) {
  int index = 0;
  char currentChar = chaine[index];
  Symbole *symbole;
  
  if(currentChar == '+') 
  {
    symbole = new Plus();
  }
  else if(currentChar == '*')
  {
    symbole = new Mult();
  }
  else if(currentChar == '(')
  {
    symbole = new OuvrePar();
  }
  else if(currentChar == ')')
  {
    symbole = new FermePar();
  }
  else if(currentChar >= 48 && currentChar <= 58)
  {
    int number = 0;
    while(currentChar >= 48 && currentChar <= 58)
    {
      symbole = new Nombre(atoi(&currentChar));
      Nombre *n = new Nombre(atoi(&currentChar));
      number = number*10 + n->getValeur();
      currentChar = chaine[++index];
    }
    cout << number << endl;
  }
  else if(currentChar=='\0') {
    symbole = new EOF();
  }
  char val = symbole->getValue();
  if(val!='0') 
  {
    cout << val << endl;
  }
  
  return *symbole;
}
