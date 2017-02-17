//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E8_H
#define GL_TD2_E8_H


#include "Etat.h"

class Automate;

class E8 : public Etat {
  public :
    E8(string name);
    ~E8();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E8_H
