#include <iostream>
#include "Lexer.h"
#include <string>

int main() {
    string chaine;
  
    std::cout << "Entrez votre calcul" << std::endl;
    std::getline(std::cin,chaine);
    std::cout << "Etude de "+chaine << std::endl;
    
    Lexer lexer(chaine);
    int val = -1;
    
    while(val != 7) {
      Symbole *s = lexer.getNext(true);
      val = s->avoirJeton();
    }
    
    return 0;
}
