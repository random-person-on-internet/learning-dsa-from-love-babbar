#include <iostream>
using namespace std;

struct Hero
{
private:
    int health;

public:
    char level;

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int hp)
    {
        health = hp;
    }
    void setlevel(char lvl)
    {
        level = lvl;
    }
};

int main()
{
    Hero *h1 = new Hero;
    h1->sethealth(100);
    h1->setlevel('S');

    cout << h1->gethealth() << endl;
    cout << h1->getlevel() << endl;

    // cout << (*h1).gethealth() << endl;
    // same thing, pointer. can be replaced by pointer->

    return 0;
}