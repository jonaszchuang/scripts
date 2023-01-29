#include "Cat.h"
#include <iostream>

using namespace std;

Cat::Cat()
{
    health = 100;
}
Cat::~Cat()
{
    cout << "Cat dies" << endl;
}

void Cat::setHealth(int remainingHealth)
{
    health = remainingHealth;
}

int Cat::getHealth()
{
    return health;
}
