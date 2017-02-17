//
// Created by Lounda on 16/02/2017.
//

#ifndef GL_TD2_EOF_H
#define GL_TD2_EOF_H

#include <iostream>
#include <string>
#include <map>

#include "Symbole.h"

using namespace std;

class EOF : public Symbole {
    public:
        EOF():Symbole(EoF) {}
        ~EOF() {}
};


#endif //GL_TD2_EOF_H
