//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E8_H
#define GL_TD2_E8_H


#include "Etat.h"

class E8 : Etat {
    E8(string name);
    virtual ~E8();
    virtual void print() const;
    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E8_H
