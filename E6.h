//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E6_H
#define GL_TD2_E6_H


#include "Etat.h"

class Automate;

class E6 : public Etat {
  public :
    E6(string name);
    ~E6();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E6_H
