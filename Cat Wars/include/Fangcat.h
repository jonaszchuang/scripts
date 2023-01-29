#ifndef FANGCAT_H
#define FANGCAT_H
#include <iostream>

using namespace std;

class Fangcat
{
    public:
        Fangcat();
        virtual ~Fangcat();
        void setHealth(int remainingHealth);
        int getHealth();
    protected:

    private:
        int health;
};

#endif // FANGCAT_H
