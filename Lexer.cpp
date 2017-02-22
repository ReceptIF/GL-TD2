//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

void Lexer::putSymbol(Symbole * s) {
  switch(*s) {
      case PLUS:
          this->chaine = '+' + this->chaine; 
          break;
      case MULT:
          this->chaine = '*' + this->chaine; 
          break;
      case OUVREPAR:
          this->chaine = '(' + this->chaine; 
          break;
      case FERMEPAR:
          this->chaine = ')' + this->chaine; 
          break;
      default:
          break;
  }  
}

string Lexer::getChaine() {
  return this->chaine;
}

Symbole* Lexer::getNext() {
  int index = 0;
  char currentChar = chaine[index];
  Symbole *symbole;
  
  if(currentChar == '+') 
  {
    symbole = new Plus();
    index++;
  }
  else if(currentChar == '*')
  {
    symbole = new Mult();
    index++;
  }
  else if(currentChar == '(')
  {
    symbole = new OuvrePar();
    index++;
  }
  else if(currentChar == ')')
  {
    symbole = new FermePar();
    index++;
  }
  else if(currentChar >= 48 && currentChar <= 58)
  {
    string number = "";
    while(currentChar >= 48 && currentChar <= 58)
    {
      number += currentChar;
      currentChar = chaine[++index];
    }
    symbole = new Nombre(atoi(number.c_str()));
  }
  else if(currentChar=='\0' || currentChar=='$') {
    symbole = new EOF();
    index++;
  }
  else 
  {
    // For any other symbol, we ignore it
    index++;
    chaine = chaine.substr(index);
    return NULL;
  }

  // Eat the symbol
  if(currentChar!='\0') {
    chaine = chaine.substr(index);
  }
  else if(index == chaine.size()) {
    chaine = "";
  }
  return symbole;
}
