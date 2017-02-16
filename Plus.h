//
// Created by Theo THIBAULT on 16/02/2017.
//

#ifndef GL_TD2_PLUS_H
#define GL_TD2_PLUS_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Plus : public Symbole {
    public:
        Plus():Symbole('+') {}
        ~Plus() {}
};


#endif //GL_TD2_PLUS_H
