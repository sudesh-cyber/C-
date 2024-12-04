#include <iostream>
using namespace std;
class B;
class A 
{
    private:
    int a;

    public:
    
    A(int x) : a(x) {}
    friend void add(A, B);
};

class B 
{
    private:
    int b;

    public:
    
    B(int y) : b(y) {}

    friend void add(A, B);
};

void add(A objA, B objB) 
{
    
    cout << "Sum of private members of A and B: " << objA.a + objB.b << endl;
}

int main() 
{
    A objA(5);  
    B objB(10); 

    add(objA, objB);

    return 0;
}

