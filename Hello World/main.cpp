/*
to use the random number generator, you must:
1. add the headers #include <cstdlib> and #include <ctime>
2. add srand(time(NULL)); at the beginning of int main()
3. to call a random number, enter the following formula
    rand() % (max - min + 1) + min;

to use the clear screen function, you must:
1. add the following function between using namespace std; and int main()
    void clearScreen()
    {
        cout << "\033[2J\033[1;1H";
    }
2. to clear the screen, enter the following function
    clearScreen();

to use an error trap, you must:
1. add the following code
    if(!cin.good())
    {
        cin.clear();
        string trash;
        cin >> trash;
    }
2. ask the user for input again using a while loop
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

int main()
{
    srand(time(NULL));

    int amount = 0, min = 0, max = 0;

    cout << "How many random numbers would you like to generate? ";
    cin >> amount;
    cout << "What is the minimum? ";
    cin >> min;
    cout << "What is the maximum? ";
    cin >> max;

    clearScreen();

    cout << "Here are the random numbers:\n";

    for(int i = 0; i < amount; i++)
    {
        cout << rand() % (max - min + 1) + min << "\n";
    }

    return 0;
}
