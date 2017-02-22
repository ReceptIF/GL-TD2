#include "E1.h"

E1::E1(const string name) : Etat(name) {

}

E1::~E1() {

}

void E1::print() const {
    Etat::print();
}

bool E1::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			//cout << "Decalage de E1 vers E4" << endl;
			automate->decalage(s, new E4("E4"));
			break;
		case MULT:
			//cout << "Decalage de E1 vers E5" << endl;
			automate->decalage(s, new E5("E5"));
			break;
		case EoF:
			//cout << "OK" << endl;
			automate->setEnd(true);
			break;
		default:
			//cout << "default" << endl;
			break;
	}
    return false;
}
