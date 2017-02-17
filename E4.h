//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E4_H
#define GL_TD2_E4_H


#include "Etat.h"

class Automate;

class E4 : public Etat {
  public:
    E4(string name);
    ~E4();
    void print() const;
    bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E4_H
