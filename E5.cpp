#include "E5.h"

E5::E5(const string name) : Etat(name) {

}

E5::~E5() {

}

void E5::print() const {
    Etat::print();
}

bool E5::transition(Automate *automate, Symbole *s) {
	switch(*s){
		case OUVREPAR:
			cout << "Decalage de E5 vers E2" << endl;
			automate->decalage(s, new E2("E2"));
			break;
		case NOMBRE:
			cout << "Decalage de E5 vers E3" << endl;
			automate->decalage(s, new E3("E3"));
			break;
		case EXPR:
			cout << "Decalage de E5 vers E8" << endl;
			automate->decalage(s, new E8("E8"));
			break;
		default:
			cout << *s << endl;
			cout << "default E5" << endl;
			break;
	}
    return false;
}
