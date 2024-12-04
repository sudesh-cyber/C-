#include <iostream>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal constructor called!" << endl;
    }

    ~Animal() {
        cout << "Animal destructor called!" << endl;
    }

    void eat() {
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    
    Dog() {
        cout << "Dog constructor called!" << endl;
    }

    ~Dog() {
        cout << "Dog destructor called!" << endl;
    }

    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    
    Dog dog;

    dog.eat();
    dog.bark();

    return 0;
}

