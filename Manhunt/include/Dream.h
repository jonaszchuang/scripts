#ifndef DREAM_H
#define DREAM_H

using namespace std;

class Dream
{
    public:
        float health = 20, defence = 8, damage = 9;
        string weapon = "axe", material = "diamond", boots = "diamond", leggings = "diamond", chestplate = "diamond", helmet = "diamond";
        int mine = 2, diamonds = 1;
        Dream();
        virtual ~Dream();

    protected:

    private:
};

#endif // DREAM_H
