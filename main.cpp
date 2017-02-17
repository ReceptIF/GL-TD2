#include <iostream>
#include "Lexer.h"

using namespace std;

int main() {
    Lexer lexer("(1+4)+ (451616 * 5 + 784848)");

    Symbole *s = lexer.getNext();
    while (s->getIdent() != ENDOFFILE) {
        s->print();
        s = lexer.getNext();
    }
    s->print();

    return 0;
}
