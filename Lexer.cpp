//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Lexer.h"
#include <iostream>
#include <stdlib.h>

Lexer::Lexer() {
  chaine = "8+6*1";
}

Lexer::Lexer(string chaine) {
  this->chaine = chaine;
}

void Lexer::putSymbol(Symbole *s) {
  
  switch(*s) {
    case PLUS:
      chaine = '+' + chaine;
      break;
    case MULT:
      chaine = '*' + chaine;
      break;
    case FERMEPAR:
      chaine = ')' + chaine;
      break;
    case OUVREPAR:
      chaine = '(' + chaine;
      break;
  }
  
}

Symbole *Lexer::getNext(bool eat) {
  int nbCharLus = 0;
  bool charTrouve = false;
  Symbole *symbole;
  
  while(!charTrouve) 
  {
    char currentChar = chaine[nbCharLus];
    charTrouve = true;
    
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
      //cout << "Read a number" << endl;
      //cout << "char " << currentChar << endl;
      
      string number(1,currentChar);
      //cout << "number " << number << endl;
      
      nbCharLus++;
      
      while(chaine[nbCharLus] >= 48 && chaine[nbCharLus] <= 58)
      {
        //cout << "char" << chaine[nbCharLus] << endl;
        number += chaine[nbCharLus];
        //cout << "nombre" << number << endl;
        nbCharLus++;
      }
      
      symbole = new Nombre(atoi(number.c_str()));
    }
    else if(currentChar == '\0')
    {
      symbole = new FinDeTexte();
    }
    else {
      nbCharLus++;
      charTrouve = false;
    }
  }
  
  if(eat) {
    chaine = chaine.substr(nbCharLus);
  }
  
  //cout << symbole->avoirJeton() << endl;
  return symbole;
}
