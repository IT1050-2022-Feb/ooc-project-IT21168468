#include <iostream>
#include "Person.h"
#include "Doctor.h"
#include <cstring>

using namespace std;

Doctor :: Doctor() {
  DoctorId = "";
  Name = "";
  Email = "";
  ContactNo = "";
}

Doctor :: Doctor(string name, string email, string contactNo, string doctorId) {
  DoctorId = doctorId;
  Name = name;
  Email = email;
  ContactNo = contactNo;
}

void Doctor :: Display() {
  cout << "This is Doctor Class >> Derived from Person\n\n";
}

void Doctor :: DisplayDoctorData() {
	cout << "Doctor Id	: " << DoctorId << "\n";
	cout << "Name		: " << Name  << "\n";
	cout << "Email		: " << Email << "\n";
	cout << "Cotact Number	: " << ContactNo << "\n\n";
}

Doctor :: ~Doctor() {
	cout << "Destructor Called\n";
}
