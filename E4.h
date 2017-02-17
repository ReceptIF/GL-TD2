
#ifndef GL_TD2_E4_H
#define GL_TD2_E4_H


#include "Etat.h"
#include "Automate.h"
#include "E7.h"
#include "E2.h"
#include "E3.h"

class E4 : public Etat {
	public :
	    E4(string name);
	    virtual ~E4();
	    virtual void print() const;
	    virtual bool transition(Automate * automate, Symbole *s);
};


#endif //GL_TD2_E4_H
