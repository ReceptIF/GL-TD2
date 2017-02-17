#include <iostream>
#include "Lexer.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    Lexer lexer;
    lexer.getNext();

    return 0;
}
