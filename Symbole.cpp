//
// Created by Olivier VICENTE on 14/02/2017.
//

#include "Symbole.h"
#include <iostream>
#include <string>

using namespace std;

char Symbole::getValue() {
	switch(this->ident) {
		case(PLUS):
			return '+';
		case(MULT):
			return '*';
		case(OUVREPAR):
			return '(';
		case(FERMEPAR):
			return ')';
		case(NOMBRE):
			return '0';
		case(EoF):
			return 'e';
		default:
			break;
	}
}