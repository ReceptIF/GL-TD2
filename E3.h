//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E3_H
#define GL_TD2_E3_H


#include "Etat.h"

class E3 : public Etat {
    public :
	    E3(string name);
	    virtual ~E3();
	    virtual void print() const;
	    virtual bool transition(Automate &automate, Symbole *s);
};


#endif //GL_TD2_E3_H
