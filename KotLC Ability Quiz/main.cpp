#include <iostream>

using namespace std;

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

void title()
{
    cout << "\t\t\tKeeper of the Lost Cities ability test" << endl;
}

int main()
{
    //Declaring the counts of abilities
    int beguilers = 0, chargers = 0, conjurers = 0, descryers = 0, empaths = 0, enhancers = 0, flashers = 0, frosters = 0;
    int gusters = 0, hydrokinetics = 0, inflicters = 0, mesmers = 0, phasers = 0, polygots = 0, psionipaths = 0;
    int pyrokinetics = 0, shades = 0, technopaths = 0, telepaths = 0, teleporters = 0, vanishers = 0, vociferators = 0;
    int answer;
    float gAnswer = true;
    //Test:
    title();
    do
    {
        if(!cin.good())
        {
            cout << "Please type one of the options" << endl;
            cin.clear();
            string trash;
            cin >> trash;
        }
        cout << "\t\t\tWhat is your favourite element?" << endl << endl;
        cout << "1 >> Fire" << endl;
        cout << "2 >> Water" << endl;
        cout << "3 >> Earth" << endl;
        cout << "4 >> Air" << endl;
        cout << "5 >> Light" << endl;
        cout << "6 >> Darkness" << endl;
        cout << "7 >> Other" << endl;
        cin >> answer;

        gAnswer = true;
        if(answer == 1)
        {
            pyrokinetics++;
        }
        else if(answer == 2)
        {
            hydrokinetics++;
            frosters ++;
        }
        else if(answer == 3)
        {
            phasers++;
        }
        else if(answer == 4)
        {
            gusters++;
            chargers++;
            frosters++;
            hydrokinetics++;
        }
        else if(answer == 5)
        {
            flashers++;
            psionipaths++;
            teleporters++;
            vanishers++;
        }
        else if(answer == 6)
        {
            inflicters++;
            shades++;
        }
        else if(answer == 7)
        {
            beguilers++;
            conjurers++;
            descryers++;
            empaths++;
            enhancers++;
            mesmers++;
            polygots++;
            telepaths++;
            technopaths++;
            vociferators++;
        }
        else
        {
            gAnswer = false;
        }
        clearScreen();
    }
    while(!cin.good() || gAnswer == false);
    title();
    do
    {
        if(!cin.good())
        {
            cout << "Please type one of the options" << endl;
            cin.clear();
            string trash;
            cin >> trash;
        }
        cout << "\t\t\tWhat do you do in your spare time" << endl << endl;
        cout << "1 << Play video games and try to persuade your friends to play with you!" << endl;
    }
    while(!cin.good || gAnswer == false);
    return 0;
}
