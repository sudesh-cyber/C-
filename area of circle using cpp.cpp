#include <iostream>
#include <cmath>  
using namespace std;

class Circle 
{
private:
    double radius;

public:
    
    void setRadius(double r) 
	{
        radius = r;
    }

  
    double calculateArea() 
	{
        return M_PI * radius * radius; 
    }
};

int main() 
{
    Circle circle;  
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    circle.setRadius(radius);

    double area = circle.calculateArea();
    cout << "The area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}
