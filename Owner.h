#include "Person.h"
#include <cstring>

using namespace std;

class Owner : public Person {
  protected:
    string OwnerId;
  public:
  	Owner();
  	Owner(string name, string email, string contactNo);
	void Display();
    void DisplayOwnerData();
    ~Owner();
};
