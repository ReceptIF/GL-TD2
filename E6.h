//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E6_H
#define GL_TD2_E6_H


#include "Etat.h"

class E6 : Etat {
    E6(string name);
    virtual ~E6();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E6_H
