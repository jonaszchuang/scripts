#include <iostream>
#include <string>

using namespace std;

    /*
    cout << "\n\n" << word1 << "\n\n" << word2 << "\n\n";
    for(int i = 0; i < word1.length(); i++)
    {
        cout << letters1[i] << " ";
    }
    cout << "\n\n";
    for(int i = 0; i < word2.length(); i++)
    {
        cout << letters2[i] << " ";
    }
    cout << "\n\n";
    pause();
    */

void clearScreen()
{
    cout << "\033[2J\033[1;1H";
}

void pause()
{
    string pause = "";
    cout << "Enter any value to continue: ";
    cin >> pause;
}

int main()
{
    string word1 = "", word2 = "";
    int letters1[word1.length()] = {}, letters2[word2.length()] = {}, turn = 0;
    bool word1Found = false, word2Found = false;
    cout << "Player 1, please enter a word: ";
    cin >> word1;
    for(int i = 0; i < word1.length(); i++)
    {
        letters1[i] = 0;
    }
    clearScreen();
    cout << "Player 2, please enter a word: ";
    cin >> word2;
    for(int i = 0; i < word2.length(); i++)
    {
        letters2[i] = 0;
    }
    clearScreen();
    while(word1Found == false && word2Found == false)
    {
        char guess = 0;
        int sum1 = 0, sum2 = 0;
        turn++;
        cout << "Player 1's word: ";
        for(int i = 0; i < word1.length(); i++)
        {
            if(letters1[i] == 0)
            {
                cout << "_";
            }
            else
            {
                cout << word1[i];
            }
        }
        cout << "\n\nPlayer 2's word: ";
        for(int i = 0; i < word2.length(); i++)
        {
            if(letters2[i] == 0)
            {
                cout << "_";
            }
            else
            {
                cout << word2[i];
            }
        }
        if(turn % 2 == 1)
        {
            cout << "\n\n***Player 1's turn***\n\n";
        }
        else
        {
            cout << "\n\n***Player 2's turn***\n\n";
        }
        cout << "Please enter a letter you would like to guess: ";
        cin >> guess;
        for(int i = 0; i < word1.length(); i++)
        {
            if(letters1[i] == 0 && guess == word1[i])
            {
                letters1[i] = 1;
            }
            sum1 += letters1[i];
        }
        for(int i = 0; i < word2.length(); i++)
        {
            if(letters2[i] == 0 && guess == word2[i])
            {
                letters2[i] = 1;
            }
            sum2 += letters2[i];
        }
        if(sum1 == word1.length())
        {
            word1Found = true;
        }
        if(sum2 == word2.length())
        {
            word2Found = true;
        }
        clearScreen();
    }
    cout << "Player 1's word: " << word1 << "\n\nPlayer 2's word: " << word2 << "\n\n";
    if(word1Found && word2Found)
        cout << "Tie!";
    else if(word1Found)
        cout << "Player 2 wins!";
    else
        cout << "Player 1 wins!";
    return 0;
}
