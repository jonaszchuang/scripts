#include <iostream>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    srand(time(NULL));

    int maxItems = 0, minItems = 0, amountOfWinners = 0;
    string winner;
    bool outputGood = true;
    //inputs
    do
    {
        if(!cin.good())
        {
            clearScreen();
            cin.clear();
            string trash;
            cin >> trash;
            cout << "Input must be int" << endl;
        }
        cout << "Pick the amount of things." << endl;
        cin >> maxItems;
    }
    while(!cin.good());
    string things[maxItems];
    cout << "Type the names of all the items." << endl;
    for(int i = 0; i < maxItems; i++)
    {
        cin >> things[i];
    }
    do
    {
        clearScreen();
        if(!cin.good())
        {
            cin.clear();
            string trash;
            cin >> trash;
            cout << "Input must be int" << endl;
        }
        cout << "Pick the amount of winners(1-" << maxItems - 1 << ")." << endl;
        cin >> amountOfWinners;
        if(amountOfWinners >= maxItems || amountOfWinners < 1)
        {
            outputGood = false;
            cout << "The amount of winners mut be between 1-" << maxItems - 1 << "." << endl;
        }
    }
    while(!cin.good() || outputGood == false);
    int picked = rand() % (maxItems - minItems + 1) + minItems;
    //outputs
    for(int i = 0; i < maxItems; i++)
    {
        if(picked == i)
        {
            winner = things[i];
            break;
        }
    }
    cout << "This program has chosen " << winner << "!" << endl;
    return 0;
}
