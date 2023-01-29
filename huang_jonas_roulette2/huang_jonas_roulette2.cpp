#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void showInstructions()
{
    cout << "In this program you start off with $100 and bet until you want to quit or have $0 left." << endl;
    cout << "You type E)ven, O)dd, Z)ero, or Q)uit." << endl;
}
int getBetAmount(int money)
{
    int betAmount;
    bool passed = false;
    while (passed == false || !cin.good())
    {
        if (!cin.good())
        {
            cin.clear();
            string trash;
            cin >> trash;
        }
        cout << "Enter bet amount ($) > ";
        cin >> betAmount;
        if (money - betAmount < 0)
        {
            cout << "That number is invalid" << endl;
        }
        else if (betAmount < 1)
        {
            cout << "Please type a number that is larger than 0" << endl;
        }
        else
        {
            passed = true;
        }
    }


    return betAmount;
}
int main()
{
    srand(time(NULL));
    // Input variables
    int const STARTING_MONEY = 100;
    int const MAX_WHEEL = 36;
    int const MIN_WHEEL = 0;
    char typeOfBet;
    // Output variables
    int moneyRemaining = STARTING_MONEY;
    int wins = 0;
    int losses = 0;
    int wheelNumber = 0;
    int bank = 0;
    cout << "In this program you start off with $" << STARTING_MONEY << " and bet until you want to quit or have $0 left." << endl;
    cout << "You type E)ven, O)dd, Z)ero, H)elp, or Q)uit." << endl << endl;
    while (moneyRemaining > 0 && typeOfBet != 'Q')
    {
        cout << "Money: $" << moneyRemaining << endl;
        cout << "Type E)ven, O)dd, Z)ero, H)elp, or Q)uit." << endl;
        cin >> typeOfBet;
        wheelNumber = rand() % (MAX_WHEEL - MIN_WHEEL + 1) + MIN_WHEEL;
        if (typeOfBet == 'E' || typeOfBet == 'O' || typeOfBet == 'Z')
        {
            bank = getBetAmount(moneyRemaining);
            if ((wheelNumber == 0 && typeOfBet == 'Z') || (wheelNumber % 2 == 0 && typeOfBet == 'E') || (wheelNumber % 2 == 1 && typeOfBet == 'O'))
            {
                if (typeOfBet == 'Z')
                {
                    moneyRemaining += bank * 35;
                }
                else
                {
                    moneyRemaining += bank;
                }
                cout << "You win!!! You now have " << moneyRemaining << "!!!" << endl;
                wins += 1;
            }
            else
            {
                moneyRemaining -= getBetAmount(moneyRemaining);
                cout << "Sorry, you lost. You now have " << moneyRemaining << endl;
                losses += 1;
            }
            cout << "The wheel landed on " << wheelNumber << endl;
        }
        else if (typeOfBet == 'H')
        {
            showInstructions();
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
