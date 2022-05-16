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
