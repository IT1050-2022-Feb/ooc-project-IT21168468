#include <iostream>
#include "Person.h"
#include "Staff.h"
#include <cstring>

using namespace std;

Staff :: Staff() {
  StaffId = "";
  Name = "";
  Email = "";
  ContactNo = "";
}

Staff :: Staff(string staffId, string name, string email, string contactNo) {
  	StaffId = staffId;
  	Name = name;
	Email = email;
	ContactNo = contactNo;
}

void Staff :: Display() {
  cout << "This is Staff Class >> Derived from Person\n\n";
}

void Staff :: DisplayStaffData() {
	cout << "Staff Id	: " << StaffId << "\n";
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

Staff :: ~Staff() {
	cout << "Destructor Called\n";
}

