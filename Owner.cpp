#include "Person.h"
#include <cstring>

using namespace std;

Owner :: Owner(){
	Name = "";
	Email = "";
	ContactNo = "";
}

Owner :: Owner(string name, string email, string contactNo) {
	Name = name;
	Email = email;
	ContactNo = contactNo;
}


void Owner :: Display() {
  cout << "This is Owner Class >> Derived from Person\n\n";
}

void Owner :: DisplayOwnerData() {
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

Owner :: ~Owner() {
	cout << "Destructor Called\n";
}
