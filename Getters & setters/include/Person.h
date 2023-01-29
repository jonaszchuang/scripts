#ifndef PERSON_H
#define PERSON_H
#include <iostream>

using namespace std;


class Person
{
    public:
        Person();
        virtual ~Person();
        string toString();
        void setName(string newName);
        string getName();
    protected:

    private:
        string name;
};

#endif // PERSON_H
