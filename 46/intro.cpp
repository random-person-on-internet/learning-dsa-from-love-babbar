#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    void print()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int hp)
    {
        health = hp;
    }

    void setLevel(char lvl)
    {
        level = lvl;
    }
};

int main()
{
    Hero h1;

    h1.setHealth(79);
    h1.setLevel('A');

    cout << "Health = " << h1.getHealth() << endl;
    // h1.health = 70;
    cout << "Level = " << h1.level << endl;

    cout << "Size of h1 = " << sizeof(h1);

    return 0;
}
