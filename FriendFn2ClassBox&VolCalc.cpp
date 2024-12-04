#include <iostream>
using namespace std;
class VolumeCalculator;

class Box 
{
private:
    double length;
    double width;
    double height;

public:
    
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    friend double calculateVolume(Box box);
};

double calculateVolume(Box box) 
{
    return box.length * box.width * box.height;
}

int main() 
{
    double length, width, height;

    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the width of the box: ";
    cin >> width;
    cout << "Enter the height of the box: ";
    cin >> height;

    Box box(length, width, height);

    double volume = calculateVolume(box);

    cout << "The volume of the box is: " << volume << endl;

    return 0;
}

