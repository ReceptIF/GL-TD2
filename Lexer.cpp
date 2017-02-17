//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

Lexer::Lexer() {
  chaine = "8";
}

Symbole Lexer::getNext(bool eat) {
  char currentChar = chaine[0];
  int nbCharLus = 0;
  Symbole *symbole;
  
  if(currentChar == '+') 
  {
    symbole = new Plus();
    nbCharLus++;
  }
  else if(currentChar == '*')
  {
    symbole = new Mult();
    nbCharLus++;
  }
  else if(currentChar == '(')
  {
    symbole = new OuvrePar();
    nbCharLus++;
  }
  else if(currentChar == ')')
  {
    symbole = new FermePar();
    nbCharLus++;
  }
  else if(currentChar >= 48 && currentChar <= 58)
  {
    symbole = new Nombre(atoi(&currentChar));
    nbCharLus++;
  }
  else if(currentChar == '\0')
  {
    symbole = new FinDeTexte();
  }
  
  if(eat) {
    chaine = chaine.substr(nbCharLus);
  }
  
  cout << symbole->avoirJeton() << endl;
  return *symbole;
}
