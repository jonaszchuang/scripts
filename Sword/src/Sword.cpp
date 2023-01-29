#include <iostream>
#include "Sword.h"

Sword::Sword()
{
    cout << "Name the sword, no spaces" << endl;
    cin >> name;
    attackTimes = 0;
}

Sword::~Sword()
{
    cout << "Your sword " << name << " killed " << attackTimes << " in total" << endl;
}
void Sword::attack()
{
    cout << "You killed a zombie!" << endl;
    attackTimes += 1;
}
