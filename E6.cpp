#include "E6.h"

E6::E6(const string name) : Etat(name) {

}

E6::~E6() {

}

void E6::print() const {
    Etat::print();
}

bool E6::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case PLUS:
			cout << "Decalage de E6 vers E4" << endl;
			automate->decalage(s, new E4("E4"));
			break;
		case MULT:
			cout << "Decalage de E6 vers E5" << endl;
			automate->decalage(s, new E5("E5"));
			break;
		case FERMEPAR:
			cout << "Decalage de E6 vers E9" << endl;
			automate->decalage(s, new E9("E9"));
			break;
		default:
			cout << "default" << endl;
			break;
	}
    return false;
}
