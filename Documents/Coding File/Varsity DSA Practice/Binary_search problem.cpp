#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;


int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    vector<int> arr = {2, 3, 5, 7, 11, 13, 17, 19}; 
    int target;

    cout << "Enter the target to search: ";
    cin >> target;

    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Target " << target << " found at index " << result << "." << endl;
    } else {
        cout << "Target " << target << " not found." << endl;
    }

    return 0;
}