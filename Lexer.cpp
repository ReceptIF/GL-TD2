//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

void Lexer::putSymbol(Symbole * s) {
  
  //TODO: this.
  
}

string Lexer::getChaine() {
  return this->chaine;
}

Symbole Lexer::getNext(bool eat) {
  if(!eat) {
    chaine = previousChaine;
  }
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
    cout << number << endl;
  }
  else if(currentChar=='\0') {
    symbole = new EOF();
    index++;
  }
  else 
  {
    index++;
    chaine = chaine.substr(index);
    return NULL;
  }
  char val = symbole->getValue();
  if(val!='0') 
  {
    cout << val << endl;
  }
  if(eat && currentChar!='\0') {
    previousChaine = chaine;
    chaine = chaine.substr(index);
  }
  if(index == chaine.size()) {
    chaine = "";
  }

  return *symbole;
}
