#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
    Person person;
    person.setName("Jonas");
    cout << "hi " << person.toString() << endl;
    cout << "bye " << person.getName() << endl;
    return 0;
}
