#include <iostream>
using namespace std;

int Duplicatefind(int arr[], int n) {
    
    int a = arr[0];
    int b = arr[0];
    
   
    do {
        a = arr[a];
        b = arr[arr[b]];
    } while (a != b);
    
    
    a = arr[0];
    while (a != b) {
        a = arr[a];
        b = arr[b];
    }
    
 
    return a;
}

int main() {
    int arr[] = {3, 1, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]) - 1; // n is size of the array - 1
    
    int duplicate = Duplicatefind(arr, n);
    cout << "The duplicate number is: " << duplicate << endl;
    
    return 0;
}
