#include "Person.h"
#include <cstring>

using namespace std;

class Staff : public Person {
  protected:
    string StaffId;
  public:
    Staff();
    Staff(string staffId, string name, string email, string contactNo);
    void Display();
    void DisplayStaffData();
    ~Staff();
};
