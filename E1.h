//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E1_H
#define GL_TD2_E1_H


#include "Etat.h"

class E1 : Etat {
    E1(string name);
    virtual ~E1();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E1_H
