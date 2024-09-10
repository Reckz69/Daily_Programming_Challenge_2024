#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr) {
    int n = arr.size() + 1;  
    int totalSum = n * (n + 1) / 2;   
    int arrSum = 0;
    
   
    for (int i = 0; i < arr.size(); i++) {
        arrSum += arr[i];
    }
    
   
    int missingNumber = totalSum - arrSum;
    return missingNumber;
}

int main() {
   
    vector<int> arr = {1, 2, 4, 5};
    
    
    int missingNumber = findMissingNumber(arr);
    cout << "Missing Number: " << missingNumber << endl;

    return 0;
}
