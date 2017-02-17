#include <iostream>
#include "Lexer.h"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Lexer lexer("1+12+4");

    for (int i = 0; i < 6; i++) {
        Symbole s = lexer.getNext();
        char c = *s;
        cout << c << endl;
    }

    return 0;
}
