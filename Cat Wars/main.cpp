#include <iostream>
#include "Cat.h"
#include "Normalcat.h"
#include "Packcat.h"
#include "Fangcat.h"

using namespace std;

int main()
{
    /*
    int Hlevel = 1, Slevel = 1, input = 0;
    string name;
    bool win = false;
    */
    Cat cat;
    /*
    cout << "Welcome to Cat Wars!" << endl;
    cout << "In this game, you try to save the world from a evil cat organisation by defending different places." << endl;
    cout << "You also try to penetrate there base with your cat, (what do you want your cat's name to be) " << flush;
    cin >> name;
    cout << endl;
    */
    cout << "Starting health: " << cat.getHealth() << endl;
    cat.setHealth(20);
    cout << "Ending health: " << cat.getHealth() << endl;
    /*
    do
    {
        cout << "\t\t\t\tCat Wars" << endl;
        cout << "\t\t\t\tHome" << endl;
        cout << "What do you want to do?" << endl;
        cout << "1 << Protect a dying city" << endl;
        cout << "2 << Try to get into 'their' headquarters" << endl;
        cout << "3 << Observe the amount of progress you made(in 'their' headquarters, and in the cities you saved)" << endl;
        cout << "2 << Examine your cat" << endl;
        cout << "3 << Upgrade your cat" << endl;
        cin >> input;
        if(input = 1)
        {

        }
    }
    while(win == false);
        */
    return 0;
}
