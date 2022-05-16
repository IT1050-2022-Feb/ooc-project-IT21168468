#include <iostream>
#include "Person.h"
#include "Owner.h"
#include "Doctor.h"
#include "Staff.h"

using namespace std;

int main () {
  	
	Person per1;
	Owner *ow1;
	Doctor *doc1;
	Staff *st1;
	
	per1.Display();
	
	ow1 = new Owner();
	ow1 = new Owner("Mr.Yasiru", "yasiru@gmail.com", "0131471593");
	ow1->Display();
	
	doc1 = new Doctor();
	doc1 = new Doctor("Doc01", "Mr.Jagath", "jagath@gmail.com", "0115841236");
	doc1->Display();
	
	st1 = new Staff();
	st1 = new Staff("St01", "Mr.Pasan", "pasan@gmail.com", "0124583125");
	st1->Display();
	
	ow1->DisplayOwnerData();
	doc1->DisplayDoctorData();
	st1->DisplayStaffData();
	
	delete ow1;
	delete doc1;
	delete st1;

	return 0;

}
