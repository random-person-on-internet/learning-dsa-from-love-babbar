#include <iostream>
using namespace std;

class Hero
{
private:
    int health;

public:
    char level;

    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // Parameterised constructor
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
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
    cout << "Creating object statically : " << endl;
    Hero raj(34, 'A');

    cout << "Creating object dynamically : " << endl;
    Hero *dhruv = new Hero;

    cout << "Raj's health = " << raj.getHealth() << endl;
    cout << "Raj's level = " << raj.getLevel() << endl;

    return 0;
}
