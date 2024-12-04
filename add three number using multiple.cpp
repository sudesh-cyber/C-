#include <iostream>
using namespace std;

class Add1 
{
protected:
    int num1;
public:
    void setNum1(int n) 
	{
        num1 = n;
    }
};

class Add2 
{
protected:
    int num2;
public:
    void setNum2(int n) 
	{
        num2 = n;
    }
};
class Add3 
{
protected:
    int num3;
public:
    void setNum3(int n) 
	{
        num3 = n;
    }
};

class Calculator : public Add1, public Add2, public Add3 
{
public:
    int add() 
	{
        return num1 + num2 + num3;  
    }
};

int main() 
{
    Calculator calc;  
    calc.setNum1(10);
    calc.setNum2(20);
    calc.setNum3(30);

    cout << "The sum of the three numbers is: " << calc.add() << endl;

    return 0;
}
