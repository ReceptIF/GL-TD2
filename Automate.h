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
  	bool end;
    vector<Symbole *> symbolstack;
    vector<Etat *> statestack;
   // Lexer *lexer;
  
  public:
    Automate();
    ~Automate();
    void setEnd(bool b){this->end = b;}
    void lecture();
    void decalage(Symbole * s, Etat * e);
    void reduction(int n, Symbole * s);
};


#endif //GL_TD2_AUTOMATE_H
