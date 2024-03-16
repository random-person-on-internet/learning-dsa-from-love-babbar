#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    Hero()
    {
        cout << "Default constructor called" << endl;
        name = new char[10];
    }

    // creating copy constructor ourselves (it exists by default as well)
    // Hero(Hero &source)
    // {
    //     this->health = source.health + 23; // for fun
    //     this->level = source.level;
    // }

    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }

    char getLevel()
    {
        return level;
    }

    char getHealth()
    {
        return health;
    }

    void printInfo()
    {
        cout << "Name = " << name << endl;
        cout << "Health = " << health << "\nLevel = " << level << endl;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    // destructor
    ~Hero()
    {
        cout << name << " dies" << endl;
    }
};

int main()
{
    Hero dev(70, 'A');
    char name[4] = "Dev";
    dev.setName(name);
    dev.printInfo();

    Hero ved(dev);
    ved.printInfo();

    ved.name[0] = 'V';
    ved.printInfo();
    dev.printInfo();

    // both changed as default copy constructor creates SHALLOW COPY

    return 0;
}
