#include <iostream> 
using namespace std; 
 
inline double square(double number) { 
    return number * number; 
} 
 
int main() { 
    double number;  
    cout << "Enter a number to calculate its square: "; 
    cin >> number; 
    
    
    if(cin.fail()) {
        cout << "Invalid input! Please enter a numeric value." << endl;
        return 1;
    }
    
    double result = square(number); 
    cout << "The square of " << number << " is: " << result << endl; 
    
    return 0; 
}
