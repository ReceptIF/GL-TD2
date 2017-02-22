//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_LEXER_H
#define GL_TD2_LEXER_H

#include "Symbole.h"
#include "Plus.h"
#include "Mult.h"
#include "OuvrePar.h"
#include "FermePar.h"
#include "Nombre.h"
#include "EOF.h"
#include <string>

using namespace std;

class Lexer {
  protected:
    string chaine;

  public:
    Lexer(string chaine){this->chaine = chaine; }
    string getChaine();
    void putSymbol(Symbole * s);
    Symbole* getNext();

};


#endif //GL_TD2_LEXER_H
