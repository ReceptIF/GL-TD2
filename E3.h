//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E3_H
#define GL_TD2_E3_H


#include "Etat.h"

class Automate;

class E3 : public Etat {
  public :
    E3(string name);
    ~E3();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E3_H
