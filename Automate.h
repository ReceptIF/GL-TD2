//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_AUTOMATE_H
#define GL_TD2_AUTOMATE_H

#include <vector>
#include "Symbole.h"
#include "Etat.h"
#include "Lexer.h"

using namespace std;

class Automate {
  protected :
  	bool eat;
    vector<Symbole *> symbolstack;
    vector<Etat *> statestack;
   // Lexer *lexer;
  
  public:
    Automate();
    ~Automate();
    void lecture();
    void decalage(Symbole * s, Etat * e);
    void reduction(int n, Symbole * s);
};


#endif //GL_TD2_AUTOMATE_H
