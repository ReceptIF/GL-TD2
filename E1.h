//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E1_H
#define GL_TD2_E1_H


#include "Etat.h"

class Automate;

class E1 : public Etat {
  public :
    E1(string name);
    ~E1();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E1_H
