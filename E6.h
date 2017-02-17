
#ifndef GL_TD2_E6_H
#define GL_TD2_E6_H


#include "Etat.h"
#include "Automate.h"
#include "E4.h"
#include "E5.h"
#include "E9.h"

class E6 : public Etat {
	public :
	    E6(string name);
	    virtual ~E6();
	    virtual void print() const;
	    virtual bool transition(Automate * automate, Symbole *s);
};


#endif //GL_TD2_E6_H
