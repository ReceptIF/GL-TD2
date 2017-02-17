
#ifndef GL_TD2_E5_H
#define GL_TD2_E5_H


#include "Etat.h"
#include "Automate.h"
#include "E8.h"
#include "E2.h"
#include "E3.h"

class E5 : public Etat {
	public :
	    E5(string name);
	    virtual ~E5();
	    virtual void print() const;
	    virtual bool transition(Automate * automate, Symbole *s);
};


#endif //GL_TD2_E5_H
