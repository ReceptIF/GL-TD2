//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

Lexer::Lexer() {
  chaine = "+2";
}

void Lexer::putSymbol(Symbole * s) {
  
  //TODO: this.
  
}

Symbole Lexer::getNext(bool eat) {
  char currentChar = chaine[0];
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
    symbole = new Nombre(atoi(&currentChar));
  }
  
  char c = *symbole;
  cout << c << endl;
  return *symbole;
}
