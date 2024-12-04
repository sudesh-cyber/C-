#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
	{
        sum += arr[i];  
    }
    return sum;
}

int main() 
{
    int size;
    cout << "Enter the number of elements in the array: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
	{
        cin >> arr[i];
    }

    int sum = calculateSum(arr, size);
    
    cout << "The sum of the array elements is: " << sum << endl;

    return 0;
}
