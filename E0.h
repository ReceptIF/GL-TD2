//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E0_H
#define GL_TD2_E0_H


#include "Etat.h"
#include "E1.h"
#include "E2.h"
#include "E3.h"

class Automate;

class E0 : public Etat {
  public:
    E0(string name);
    ~E0();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E0_H
