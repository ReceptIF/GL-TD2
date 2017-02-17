//
// Created by Olivier VICENTE on 14/02/2017.
//

#ifndef GL_TD2_ETAT_H
#define GL_TD2_ETAT_H

#include <iostream>
#include <string>

#include "Symbole.h"

using namespace std;
class Automate;

class Etat {
    public:
        Etat(string name);
        virtual ~Etat();
        virtual void print() const;
        virtual bool transition(Automate * automate,Symbole * s)=0;

    protected:
            string name;
};


#endif //GL_TD2_ETAT_H
