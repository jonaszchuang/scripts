#include "Fangcat.h"

using namespace std;

Fangcat::Fangcat()
{
    //ctor
}

Fangcat::~Fangcat()
{
    //dtor
}

void Fangcat::setHealth(int remainingHealth)
{
    health = remainingHealth;
}

int Fangcat::getHealth()
{
    return health;
}
