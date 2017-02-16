//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E0_H
#define GL_TD2_E0_H


#include "Etat.h"

class E0 : Etat {
    E0(string name);
    virtual ~E0();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E0_H
