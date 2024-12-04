#include <iostream>
using namespace std; 

class B; 

class A {
private:
    int a;
public:
    A(int x) : a(x) {} 

    friend int add(A, B); 
};

class B {
private:
    int b;
public:
    B(int y) : b(y) {}  
    friend int add(A, B); 
};
int add(A objA, B objB) {
    return objA.a + objB.b; 
}

int main() {
    A objA(10);  
    B objB(20); 

    int sum = add(objA, objB);  
    cout << "The sum of private members of A and B is: " << sum << endl;  

    return 0;
}
