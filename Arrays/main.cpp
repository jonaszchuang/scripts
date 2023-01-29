#include <iostream>
#include <string>

using namespace std;

string printNumbers(int limit)
{
    string output;
    for (int i = 1; i < limit + 1; i++)
    {
        output += to_string(i) + "\n";
    }
    return output;
}

int main()
{
    int number = 360;
    cout << printNumbers(number);

    return 0;
}
