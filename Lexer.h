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
#include "FinDeTexte.h"
#include <string>

using namespace std;

class Lexer {
  protected:
    string chaine;
  public:
    Lexer();
    Lexer(string chaine);
    void putSymbol(Symbole * s);
    Symbole *getNext(bool eat = false);
};


#endif //GL_TD2_LEXER_H
