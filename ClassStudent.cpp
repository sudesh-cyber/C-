#include <iostream>
using namespace std;

class Student 
{
public:
    string name;  
    int roll_no;  

    Student() 
	{
        name = "John";
        roll_no = 2;
    }

    void display() 
	{
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

int main() 
{
    Student student1;
    student1.display();

    return 0;
}

