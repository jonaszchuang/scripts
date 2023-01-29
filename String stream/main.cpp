#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    string name = "Jonas";
    int age = 10;
    stringstream ss;
    ss << "Name is ";
    ss << name;
    ss << ", Age is ";
    ss << age;
    cout << ss.str();
    return 0;
}
