#include "Person.h"
#include <cstring>

using namespace std;

class Doctor : public Person {
  protected:
    string DoctorId;
  public:
    Doctor();
    Doctor(string doctorId, string name, string email, string contactNo);
    void Display();
    void DisplayDoctorData();
    ~Doctor();
};
