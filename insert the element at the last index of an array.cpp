
#include <iostream>
using namespace std;

int main() {
    int element;
    cin >> element;
    
    // Original array with one extra slot for the new element
    int arr[6] = {15, 72, 32, 49, 55};
    
    // Calculate the current size of the array with valid elements
    
    int size = 5; // Number of valid elements initially
    
    // Insert the new element at the end of the valid elements
    arr[size] = element;
    
    // Display the updated array
    for(int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
