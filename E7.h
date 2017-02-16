//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E7_H
#define GL_TD2_E7_H


#include "Etat.h"

class E7 : Etat {
    E7(string name);
    virtual ~E7();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E7_H
