#include "Person.h"
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
