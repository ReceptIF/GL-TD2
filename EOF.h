#ifndef GL_TD2_EOF_H
#define GL_TD2_EOF_H


#include "Symbole.h"

class EOF : public Symbole {
public:
    EOF() : Symbole(FERMEPAR) {}

    ~EOF() {}
};


#endif //GL_TD2_EOF_H
