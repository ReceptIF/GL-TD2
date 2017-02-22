//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_AUTOMATE_H
#define GL_TD2_AUTOMATE_H

#include <vector>
#include "Symbole.h"
#include "Lexer.h"
#include <string>

class Etat;
class E0;
using namespace std;

class Automate {
  protected :
    vector<Symbole *> symbolstack;
    vector<Etat *> statestack;
    Lexer *lexer;
    Symbole *reserve;
  
  public:
    Automate(string chaine);
    ~Automate();
    void eval();
    void decalage(Symbole * s, Etat * e);
    void reduction(int n, Symbole * s);
    int calcul(vector<Symbole *> &tab);
};


#endif //GL_TD2_AUTOMATE_H
