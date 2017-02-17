//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E9_H
#define GL_TD2_E9_H


#include "Etat.h"

class Automate;

class E9 : public Etat {
  public:
    E9(string name);
    ~E9();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E9_H
