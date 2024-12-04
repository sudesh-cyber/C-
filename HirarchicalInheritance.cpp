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

class Dog : public Animal {
public:
    void bark() 
	{
        cout << "The dog is barking." << endl;
    }
};

class Cat : public Animal 
{
public:
    void meow() 
	{
        cout << "The cat is meowing." << endl;
    }
};

int main() 
{
    
    Dog dog;
    Cat cat;

    cout << "Dog actions:" << endl;
    dog.eat();
    dog.sleep();
    dog.bark();
    cout << endl;

    cout << "Cat actions:" << endl;
    cat.eat();
    cat.sleep();
    cat.meow();

    return 0;
}

