#include <iostream>

using namespace std;

/*
void printGrid(string cells)
{
    cout << "+ - + - + - +" << endl << "| " << cells[0][0] << " | " << cells[0][1] << " | " << cells[0][2] << " |" << endl;
    cout << "+ - + - + - +" << endl << "| " << cells[1][0] << " | " << cells[1][1] << " | " << cells[1][2] << " |" << endl;
    cout << "+ - + - + - +" << endl << "| " << cells[2][0] << " | " << cells[2][1] << " | " << cells[2][2] << " |" << endl;
    cout << "+ - + - + - +" << endl;
}
*/
int main()
{
    string cells[3][3] = {};
    int row = 0, column = 0, row2 = 0, column2 = 0;
    bool win = false;

    /*string grid[5][3] = {
            {
                "+ - + - +",
            },
            {
                "|   |   |"
            },
            {
                "+ - + - +"
            },
            {
                "|   |   |"
            },
            {
                "+ - + - +"
            }
    };
    */
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cells[i][j] = " ";
        }
    }
    do
    {
        if(cells[0][0] == "O" && cells[0][1] == "O" && cells[0][2] == "O")
        {
            cout << "Player 2 wins!!!!!" << endl;
            win = true;
        }

        cout << "+ - + - + - +" << endl << "| " << cells[0][0] << " | " << cells[0][1] << " | " << cells[0][2] << " |" << endl;
        cout << "+ - + - + - +" << endl << "| " << cells[1][0] << " | " << cells[1][1] << " | " << cells[1][2] << " |" << endl;
        cout << "+ - + - + - +" << endl << "| " << cells[2][0] << " | " << cells[2][1] << " | " << cells[2][2] << " |" << endl;
        cout << "+ - + - + - +" << endl;

        /*
        printGrid(cells)
        */
        cin >> row;
        cin >> column;
        cells[row][column] = "X";
        cin >> row2;
        cin >> column2;
        cells[row2][column2] = "O";
    }
    while(win == false);
    return 0;
}
