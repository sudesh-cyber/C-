#include <iostream>
using namespace std;
class Base 
{
public:
    void displayBase() 
	{
        cout << "This is the Base class" << endl;
    }
};
class Derived1 : public Base 
{
public:
    void displayDerived1() 
	{
        cout << "This is the Derived1 class" << endl;
    }
};

class Derived2 : public Derived1 
{
public:
    void displayDerived2() 
	{
        cout << "This is the Derived2 class" << endl;
    }
};

int main() 
{
    Derived2 obj;

    obj.displayBase();       
    obj.displayDerived1();   
    obj.displayDerived2();   

    return 0;
}

