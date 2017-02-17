//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E2_H
#define GL_TD2_E2_H


#include "Etat.h"

class Automate;

class E2 : public Etat {
  public :
    E2(string name);
    ~E2();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E2_H
