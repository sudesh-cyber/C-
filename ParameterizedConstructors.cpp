#include <iostream> 
using namespace std; 
 
class Animal 
{ 
    public: 
    string name; 
    int age; 
 
Animal(string n, int a) 
{ 
    name = n; 
    age = a; 
    cout << "Animal Constructor: " << name << " is " << age << " years old." << endl; 
} 
}; 
class Dog : public Animal 
{ 
public: 
    string breed; 
    Dog(string n, int a, string b) : Animal(n, a) 
    { 
        breed = b; 
        cout << "Dog Constructor: " << name << " is a " << breed << " and is "<< age << " years old." << endl;
    }
}; 
int main() 
{ 
    Dog dog("Buddy", 3,"Golden Retriever"); 
    return 0; 
} 
