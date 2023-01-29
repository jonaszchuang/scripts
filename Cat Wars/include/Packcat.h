#ifndef PACKCAT_H
#define PACKCAT_H
#include <iostream>

using namespace std;

class Packcat
{
    public:
        Packcat();
        virtual ~Packcat();
        void setHealth(int remainingHealth);
        int getHealth();
    protected:

    private:
        int health;
};

#endif // PACKCAT_H
