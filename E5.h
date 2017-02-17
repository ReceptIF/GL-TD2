//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E5_H
#define GL_TD2_E5_H


#include "Etat.h"

class Automate;

class E5 : public Etat{
  public:
    E5(string name);
    ~E5();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E5_H
