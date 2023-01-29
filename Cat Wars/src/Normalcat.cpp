#include "Normalcat.h"

using namespace std;

Normalcat::Normalcat()
{
    //ctor
}

Normalcat::~Normalcat()
{
    //dtor
}

void Normalcat::setHealth(int remainingHealth)
{
    health = remainingHealth;
}

int Normalcat::getHealth()
{
    return health;
}
