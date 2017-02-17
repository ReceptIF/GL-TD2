#include "Lexer.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

Lexer::Lexer() : chaine(""), index(0) {
}

Lexer::Lexer(string s) : chaine(s), index(0) {
}

Symbole Lexer::getNext() {
    return read(true);
}

Symbole Lexer::lookNext() {
    return read(false);
}

Symbole Lexer::read(bool eat) {
    int i = index;
    char currentChar = chaine[i];
    Symbole *symbole;

    if (currentChar == '+') {
        symbole = new Plus();
        i++;
    } else if (currentChar == '*') {
        symbole = new Mult();
        i++;
    } else if (currentChar == '(') {
        symbole = new OuvrePar();
        i++;
    } else if (currentChar == ')') {
        symbole = new FermePar();
        i++;
    } else if (currentChar >= 48 && currentChar <= 58) {
        int j = 0;
        while (currentChar >= 48 && currentChar <= 58) {
            j++;
            currentChar = chaine[i + j];
        }
        string number = chaine.substr(i, j);
        int x;
        stringstream convert(number);
        convert >> x;

        symbole = new Nombre(x);
        i += j;
    }

    index = eat ? i : index;

    return *symbole;
}
