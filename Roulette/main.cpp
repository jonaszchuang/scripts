#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    // Input variables
    int const STARTING_MONEY = 100;
    int const BET_AMOUNT = 5;
    int const ZERO_WIN_AMOUNT = 50;
    int const MAX_WHEEL = 36;
    int const MIN_WHEEL = 0;
    char typeOfBet;
    // Output variables
    int moneyRemaining = STARTING_MONEY;
    int wins = 0;
    int losses = 0;
    int wheelNumber = 0;
    string pause = "";
    cout << "In this program you start off with $" << STARTING_MONEY << " and bet until you want to quit or have $0 left." << endl;
    cout << "You type E)ven, O)dd, Z)ero, or Q)uit." << endl;
    cout << "Each bet is $" << BET_AMOUNT << ", but if you bet zero and win, you get $" << ZERO_WIN_AMOUNT << endl;
    cout << "Type anything to continue." << endl;
    cin >> pause;
    while (moneyRemaining > 0 && typeOfBet != 'Q')
    {
        cout << "Money: " << moneyRemaining << endl;
        cout << "Type E)ven, O)dd, Z)ero, or Q)uit." << endl;
        cin >> typeOfBet;
        wheelNumber = rand() % (MAX_WHEEL - MIN_WHEEL + 1) + MIN_WHEEL;
        if (typeOfBet == 'E' || typeOfBet == 'O' || typeOfBet == 'Z')
        {
            cout << "The wheel landed on " << wheelNumber << endl;
            if((wheelNumber == 0 && typeOfBet == 'Z') || (wheelNumber % 2 == 0 && typeOfBet == 'E') || (wheelNumber % 2 == 1 && typeOfBet == 'O'))
            {
                if (typeOfBet == 'Z')
                {
                    moneyRemaining += ZERO_WIN_AMOUNT;
                }
                else
                {
                    moneyRemaining += BET_AMOUNT;
                }
                cout << "You win!!! You now have " << moneyRemaining << "!!!" << endl;
                wins += 1;
            }

            else
            {
                moneyRemaining -= BET_AMOUNT;
                cout << "Sorry, you lost. You now have " << moneyRemaining << endl;
                losses += 1;
            }
        }
        else if (typeOfBet != 'Q')
        {
            cout << "Please type E)ven, O)dd, Z)ero, or Q)uit" << endl;
        }
    }

    cout << "Wins: " << wins << endl;
    cout << "Losses: " << losses << endl;
    cout << "Money left over: " << moneyRemaining;

    return 0;
}
