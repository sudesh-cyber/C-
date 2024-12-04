#include <iostream>
using namespace std;

class Animal 
{
public:
    void eat() 
	{
        cout << "This animal is eating." << endl;
    }

    void sleep() 
	{
        cout << "This animal is sleeping." << endl;
    }
};

class Bird 
{
public:
    void fly() 
	{
        cout << "This bird is flying." << endl;
    }
};

class Bat : public Animal, public Bird 
{
public:
    void hang() 
	{
        cout << "The bat is hanging upside down." << endl;
    }
};

int main() 
{
    Bat bat;

    bat.eat();
    bat.sleep();
    bat.fly();
    bat.hang();

    return 0;
}

