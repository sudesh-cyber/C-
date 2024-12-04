#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

float add(float a, float b) 
{
    return a + b;
}

int main()  
{
    int int1, int2;
    float float1, float2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;

    cout << "Enter two floating-point numbers: ";
    cin >> float1 >> float2;
    cout << "Sum of integers: " << add(int1, int2) << endl;
    cout << "Sum of floating-point numbers: " << add(float1, float2) << endl;

    return 0;
}
