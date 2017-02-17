//
// Created by Olivier VICENTE on 16/02/2017.
//

#ifndef GL_TD2_E1_H
#define GL_TD2_E1_H


#include "Etat.h"
#include "Automate.h"
#include "E4.h"
#include "E5.h"

class E1 : public Etat {
	public :
	    E1(string name);
	    virtual ~E1();
	    virtual void print() const;
	    virtual bool transition(Automate *automate, Symbole *s);
};


#endif //GL_TD2_E1_H
