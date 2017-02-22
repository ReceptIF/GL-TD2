#include "E4.h"

E4::E4(const string name) : Etat(name) {

}

E4::~E4() {

}

void E4::print() const {
    Etat::print();
}

bool E4::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case OUVREPAR:
			//cout << "Decalage de E4 vers E2" << endl;
			automate->decalage(s, new E2("E2"));
			break;
		case NOMBRE:
			//cout << "Decalage de E4 vers E3" << endl;
			automate->decalage(s, new E3("E3"));
			break;
		case EXPR:
			//cout << "Decalage de E4 vers E7" << endl;
			automate->decalage(s, new E7("E7"));
			break;
		default:
			//cout << "default E4" << endl;
			break;
	}
    return false;
}
