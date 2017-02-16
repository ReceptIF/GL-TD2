//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>

Lexer::Lexer() {
  chaine = "+2";
}

void Lexer::putSymbol(Symbole * s) {
  
  //TODO: this.
  
}

Symbole Lexer::getNext(bool eat) {
  char currentChar = chaine[0];
  Symbole *symbole;
  
  switch(currentChar) {
    case '+':
      symbole = new Plus();
  }
  
  char c = *symbole;
  cout << c << endl;
  return *symbole;
}
