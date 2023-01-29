#ifndef NORMALCAT_H
#define NORMALCAT_H
#include <iostream>

using namespace std;

class Normalcat
{
    public:
        Normalcat();
        virtual ~Normalcat();
        void setHealth(int remainingHealth);
        int getHealth();
    protected:

    private:
        int health;
};

#endif // NORMALCAT_H
