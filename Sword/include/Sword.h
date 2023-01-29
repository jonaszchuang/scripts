#ifndef SWORD_H
#define SWORD_H

using namespace std;

class Sword
{
public:
    Sword();
    virtual ~Sword();
    void attack();
protected:

private:
    int attackTimes;
    string name;
};

#endif // SWORD_H
