#include <iostream>
#include "Speedrunner.h"
#include "Dream.h"

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}
void continueTheGame()
{
    string next;
    cout << "Type anything to continue" << endl;
    cin >> next;
}

int main()
{
    int hunterChoice = 0, input = 0;
    bool next = false;
    Speedrunner speedrunner;
    while(next == false)
    {
        cout << "1 << Dream" << endl;
        cin >> hunterChoice;
        if(hunterChoice != 1)
        {
            cout << "Please choose one of the available options" << endl;
        }
        else
        {
            next = true;
        }
    }
    next = false;
    if (hunterChoice == 1)
    {
        clearScreen();

        Dream dream;
        continueTheGame();
        clearScreen();
        cout << "You start running away from spawn, when you notice that Dream was not following you." << endl;
        cout << "In fact, you can't even see him." << endl;
        cout << "'Weird' you think." << endl;
        continueTheGame();
        clearScreen();
        cout << "18 minutes later. . ." << endl << endl;
        cout << "You finally find a Nether Fortress after 8 minutes of search" << endl;
        cout << "It's scary how you still haven't seen Dream, and the last achivement he got was the Nether Fortress one. . ." << endl;
        continueTheGame();
        clearScreen();
        cout << "You loot the fortress and find 5 diamonds from the chests, WOW!" << endl;
        do
        {

            cout << "What do you do with those 5 diamonds?" << endl;
            cout << "1 << Make diamond sword and pick" << endl;
            cout << "2 << Make diamond boots" << endl;
            cout << "3 << Make a diamond helmet" << endl;
            cout << "4 << Make a diamond axe" << endl;
            cout << "5 << Save all your diamonds" << endl;
            cin >> input;
            next = true;
            switch(input)
            {
            case 1:
                speedrunner.damage = 8;
                speedrunner.mine = 4;
                speedrunner.weapon = "sword";
                speedrunner.material = "diamond";
                speedrunner.diamonds -= 5;
                break;
            case 2:
                speedrunner.defence += 0.25;
                speedrunner.diamonds -= 4;
                speedrunner.boots = "diamond";
                break;
            case 3:
                speedrunner.defence += 0.50;
                speedrunner.diamonds -= 5;
                speedrunner.helmet = "diamond";
                break;
            case 4:
                speedrunner.material = "diamond";
                speedrunner.diamonds -= 3;
                break;
            case 5:
                break;
            default:
                cout << "Please choose one of the available options" << endl;
                next = false;
                break;
            }
            if(!cin.good())
            {
                cin.clear();
                string trash;
                cin >> trash;
                cout << "Your input must be a int" << endl;
            }
            continueTheGame();
            clearScreen();
        }
        while (next == false || !cin.good());
        next = false;
        cout << "While your getting your blaze rods, you hear someone burning." << endl;
        cout << "You look behind you and see. . .";
        cout << " Dream staring at you with full diamond." << endl;
        cout << "He laughs at your amazed expresion, then suddenly takes out his diamond axe, preparing for battle" << endl;
        continueTheGame();
        do
        {
            clearScreen();
            cout << "\t\t\t\tDream" << endl << endl;
            cout << "health: " << dream.health << endl;
            cout << "weapon: " << dream.material << " " << dream.weapon << endl;
            cout << "boots: " << dream.boots << endl;
            cout << "leggings: " << dream.leggings << endl;
            cout << "chestplate: " << dream.chestplate << endl;
            cout << "helmet: " << dream.helmet << endl;
            cout << "\t\t\t\tYou" << endl << endl;
            cout << "health: " << speedrunner.health << endl;
            cout << "weapon: " << speedrunner.material << " " << speedrunner.weapon << ", bow with " << speedrunner.arrows << " arrows" << endl;
            cout << "boots: " << speedrunner.boots << endl;
            cout << "leggings: " << speedrunner.leggings << endl;
            cout << "chestplate: " << speedrunner.chestplate << endl;
            cout << "helmet: " << speedrunner.helmet << endl;
            cout << "food: " << speedrunner.goldenApple << " golden apple, " << speedrunner.steak << " steak" << endl;
            cout << "blocks: " << speedrunner.blocks << " netherack" << endl << endl;
            cout << "\t\t\tWhat do you do?" << endl;
            cout << "1 << Attack" << endl;
            cout << "2 << Eat golden apple" << endl;
            cin >> input;
            switch(input)
            {
            case 1:
                dream.health -= (speedrunner.damage - dream.defence);
                speedrunner.health -= (dream.damage - speedrunner.defence);
                break;
            case 2:
                speedrunner.health += 4.5;
                speedrunner.defence += 2;
                speedrunner.health -= (dream.damage - speedrunner.defence);
                break;
            case 3:
                if(speedrunner.steak - 1 < 1)
                {
                    cout << "You have none left" << endl;
                    speedrunner.health -= (dream.damage - speedrunner.defence);
                    continueTheGame();
                }
                else
                {
                    speedrunner.steak -= 1;
                    speedrunner.health += 2;

                }
                break;
            case 4:
                speedrunner.health -= 20 - speedrunner.defence;
                dream.health -= 20 - dream.defence;
            }
        }
        while(next == false);
    }
    return 0;
}

