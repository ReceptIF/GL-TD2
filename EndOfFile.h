#ifndef GL_TD2_EndOfFile_H
#define GL_TD2_EndOfFile_H


#include "Symbole.h"
#include <iostream>

class EndOfFile : public Symbole {
public:
    void print();

    EndOfFile() : Symbole(ENDOFFILE) {}

    ~EndOfFile() {}
};


#endif //GL_TD2_EndOfFile_H
