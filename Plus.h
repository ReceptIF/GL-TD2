#ifndef GL_TD2_PLUS_H
#define GL_TD2_PLUS_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class Plus : public Symbole {
public:
    Plus() : Symbole(PLUS) {}

    ~Plus() {}
};


#endif //GL_TD2_PLUS_H
