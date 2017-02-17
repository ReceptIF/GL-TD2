#include <iostream>
#include "Lexer.h"

int main() {
    
    Lexer lexer("1525214+569+856");
    while(lexer.getChaine().size() > 0){
    	lexer.getNext(true);
    }
    
    return 0;
}
