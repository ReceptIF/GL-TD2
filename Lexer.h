#ifndef GL_TD2_LEXER_H
#define GL_TD2_LEXER_H

#include "Symbole.h"
#include "Plus.h"
#include "Mult.h"
#include "OuvrePar.h"
#include "FermePar.h"
#include "Nombre.h"
#include <string>

class Lexer {

private:
    std::string chaine;
    int index;

    Symbole read(bool eat = false);

public:
    Lexer(std::string s);

    Symbole getNext();
    Symbole lookNext();
};


#endif //GL_TD2_LEXER_H
