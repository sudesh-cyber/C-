#include <iostream> 
using namespace std; 
 
class Calculator 
{ 
public: 
    int add(int a, int b = 0) 
	{ 
        return a + b; 
    } 
 
    int subtract(int a, int b = 0) 
	{ 
        return a - b; 
    } 
    int multiply(int a, int b = 1) 
	{ 
        return a * b; 
    } 
 
    double divide(double a, double b = 1) 
	{ 
        if (b == 0) 
		{ 
            cout << "Error! Division by zero." << endl; 
            return 0; 
        } 
        return a / b; 
    } 
}; 
 
int main() 
{ 
    Calculator calc;  
    cout << "Addition of 5 and 3: " << calc.add(5, 3) << endl; 
    cout << "Addition of 5 with default argument: " << calc.add(5) << endl; 
 
    cout << "Subtraction of 10 and 4: " << calc.subtract(10, 4) << endl; 
    cout << "Subtraction of 10 with default argument: " << calc.subtract(10) << 
endl; 
 
    cout << "Multiplication of 4 and 3: " << calc.multiply(4, 3) << endl; 
    cout << "Multiplication of 4 with default argument: " << calc.multiply(4) 
<< endl; 
 
    cout << "Division of 10 by 2: " << calc.divide(10, 2) << endl; 
    cout << "Division of 10 by default argument: " << calc.divide(10) << endl; 
 
    return 0; 
}
