#include <iostream>
#include <cmath> 
using namespace std; 

double circleArea(double radius) 
{ 
    return M_PI * radius * radius;  
}

double rectangleArea(double length, double width) 
{ 
    return length * width; 
}

double triangleArea(double base, double height) 
{ 
    return 0.5 * base * height; 
}

int main() 
{ 
    double radius, length, width, base, height; 
    

    cout << "Enter the radius of the circle: "; 
    cin >> radius; 
    cout << "Area of the circle: " << circleArea(radius) << endl; 
    
    cout << "Enter the length of the rectangle: "; 
    cin >> length; 
    cout << "Enter the width of the rectangle: "; 
    cin >> width; 
    cout << "Area of the rectangle: " << rectangleArea(length, width) << endl; 
    
    
    cout << "Enter the base of the triangle: "; 
    cin >> base; 
    cout << "Enter the height of the triangle: "; 
    cin >> height; 
    cout << "Area of the triangle: " << triangleArea(base, height) << endl; 
    
    return 0; 
}
