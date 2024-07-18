#include <iostream>
#include <algorithm> 
using namespace std;
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (is_sorted(arr, arr + n)) {
        cout << "Array is sorted." <<endl;
    } else {
        cout << "Array is not sorted." <<endl;
    }

    return 0;
}