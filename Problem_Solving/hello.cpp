#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest;
            largest = num;
        } else if (num > secondLargest && num != largest) {
            secondLargest = num;
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest;
}

int main() {
    vector<int> arr = {10, 20, 4, 45, 99};

    int secondLargest = findSecondLargest(arr);
    
    if (secondLargest == -1) {
        cout << "Second largest element doesn't exist." << endl;
    } else {
        cout << "Second largest element is " << secondLargest << endl;
    }

    return 0;
}