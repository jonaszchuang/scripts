#ifndef CAT_H
#define CAT_H
#include <iostream>

using namespace std;

class Cat
{
    public:
        Cat();
        virtual ~Cat();
        void setHealth(int remainingHealth);
        int getHealth();
    protected:

    private:
        int health;
};

#endif // CAT_H
