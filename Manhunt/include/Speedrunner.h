#ifndef SPEEDRUNNER_H
#define SPEEDRUNNER_H
#include <iostream>

using namespace std;

class Speedrunner
{
    public:
        float health = 20.0, defence = 5.00, damage = 9.00;
        string weapon = "axe", material = "iron", boots = "iron", leggings = "iron", chestplate = "iron", helmet = "iron";
        int mine = 2, diamonds = 5, steak = 12, goldenApple = 1, blocks = 25, arrows = 25;
        Speedrunner();
        virtual ~Speedrunner();

    protected:

    private:
};

#endif // SPEEDRUNNER_H
