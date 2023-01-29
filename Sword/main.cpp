#include <iostream>
#include "Sword.h"

using namespace std;

int main()
{
    string command;
    bool resume = false;
    Sword sword;
    cout << "Type 'quit' or 'attack'" << endl;
    do
    {
        cin >> command;
        if(command == "attack")
        {
            sword.attack();
        }
        else if(command == "quit")
        {
            resume = true;
        }
        else
        {
            cout << "Please type 'quit' or 'attack'" << endl;
        }
    }
    while(resume == false);
    return 0;
}
