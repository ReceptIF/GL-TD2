#include <iostream>
#include "Lexer.h"
#include "Automate.h"
#include <string>

int main(int argc, const char * argv[]) {
    string chaine;
  
    if(argc != 2){
        std::cout << "Entrez votre calcul" << std::endl;
        std::getline(std::cin,chaine);
    }
    else {
        chaine = argv[1];
    }
    std::cout << "Etude de "+chaine << std::endl;
        
    Automate automate(chaine);
    automate.eval();
    
    return 0;
}
