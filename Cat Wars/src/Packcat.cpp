#include "Packcat.h"

Packcat::Packcat()
{
    //ctor
}

Packcat::~Packcat()
{
    //dtor
}

void Packcat::setHealth(int remainingHealth)
{
    health = remainingHealth;
}

int Packcat::getHealth()
{
    return health;
}
