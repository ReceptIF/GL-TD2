#include "E0.h"

E0::E0(const string name) : Etat(name) {

}

E0::~E0() {

}

void E0::print() const {
    Etat::print();
}

bool E0::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case OUVREPAR:
			cout << "Decalage de E0 vers E2" << endl;
			automate->decalage(s, new E2("E2"));
			break;
		case NOMBRE:
			cout << "Decalage de E0 vers E3" << endl;
			automate->decalage(s, new E3("E3"));
			break;
		case EXPR:
			cout << "Decalage de E0 vers E1" << endl;
			automate->decalage(s, new E1("E1"));
			break;
		default:
			cout << "default E0" << endl;
			break;
	}
    return false;
}
