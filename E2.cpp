#include "E2.h"

E2::E2(const string name) : Etat(name) {

}

E2::~E2() {

}

void E2::print() const {
    Etat::print();
}

bool E2::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case NOMBRE:
			//cout << "Decalage de E2 vers E3" << endl;
			automate->decalage(s, new E3("E3"));
			break;
		case OUVREPAR:
			//cout << "Decalage de E2 vers E2" << endl;
			automate->decalage(s, new E3("E2"));
			break;
		case EXPR:
			//cout << "Decalage de E2 vers E6" << endl;
			automate->decalage(s, new E6("E6"));
			break;
		default:
			//cout << "default" << endl;
			break;
	}
    return false;
}
