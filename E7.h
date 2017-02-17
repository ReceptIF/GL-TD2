//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E7_H
#define GL_TD2_E7_H


#include "Etat.h"

class Automate;

class E7 : public Etat {
  public :
    E7(string name);
    ~E7();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E7_H
