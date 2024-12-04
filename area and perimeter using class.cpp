#include <iostream>
using namespace std;
class Rectangle 
{
private:
    double length;
    double breadth;

public:

    Rectangle(double l, double b) 
	{
        length = l;
        breadth = b;
    }
    double calculateArea() 
	{
        return length * breadth;
    }

    double calculatePerimeter() 
	{
        return 2 * (length + breadth);
    }
};

int main() 
{
    double length, breadth;

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    Rectangle rect(length, breadth);

    cout << "The area of the rectangle is: " << rect.calculateArea() << endl;
    cout << "The perimeter of the rectangle is: " << rect.calculatePerimeter() << endl;

    return 0;
}
