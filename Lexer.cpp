#include "Lexer.h"
#include <iostream>
#include <sstream>
#include <stdlib.h>

using namespace std;

Lexer::Lexer() : chaine(""), index(0) {
}

Lexer::Lexer(string s) : chaine(s), index(0) {
}

Symbole * Lexer::getNext() {
    return read(true);
}

Symbole * Lexer::lookNext() {
    return read(false);
}

Symbole * Lexer::read(bool eat) {
    int i = index;
    char currentChar = chaine[i];
    Symbole *symbole;

    bool ok = false;

    while (!ok) {
        currentChar = chaine[i];

        if (i >= chaine.size()) {
            symbole = new EndOfFile();
            ok = true;
        } else if(currentChar == '+') {
            symbole = new Plus();
            i++;
            ok = true;
        } else if (currentChar == '*') {
            symbole = new Mult();
            i++;
            ok = true;
        } else if (currentChar == '(') {
            symbole = new OuvrePar();
            i++;
            ok = true;
        } else if (currentChar == ')') {
            symbole = new FermePar();
            i++;
            ok = true;
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
            ok = true;
        } else {
            i++;
            index++;
        }
    }

    index = eat ? i : index;

    return symbole;
}
