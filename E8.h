
#ifndef GL_TD2_E8_H
#define GL_TD2_E8_H


#include "Etat.h"
#include "Automate.h"
#include "E3.h"

class E8 : public Etat {
	public :
	    E8(string name);
	    virtual ~E8();
	    virtual void print() const;
	    virtual bool transition(Automate * automate, Symbole *s);
};


#endif //GL_TD2_E8_H
