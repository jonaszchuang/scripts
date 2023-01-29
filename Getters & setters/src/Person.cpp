#include "Person.h"

Person::Person()
{
    //ctor
}

Person::~Person()
{
    //dtor
}

string Person::toString()
{
    return "Name is " + name;
}

void Person::setName(string newName)
{
    name = newName;
}

string Person::getName()
{
    return name;
}
