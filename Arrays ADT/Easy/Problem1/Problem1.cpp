#include <iostream>
#include <vector>
using namespace std;

/*

Brute Force Approach:
Solution1: Sorting
Intuition:
We can sort the array in ascending order, hence the largest element will be at the last index of the array. 

Approach: 
Sort the array in ascending order.
Print the (size of the array -1)th index.
DryRun: 
Before sorting: arr[] = {2,5,1,3,0};

After sorting: arr[] = {0,1,2,3,5};

Hence answer : arr[sizeofthearray-1] =5
Time Complexity: O(nlogn) where n is the size of the array.
Space Complexity: O(1) as we are not using any extra space.

*/

int main() {
    vector<int> a = {2, 5, 1, 3, 0};
    int n = a.size();

    int largest = a[0]; // Assume first element is the largest initially

    for (int i = 1; i < n; i++) {
        if (a[i] > largest) {
            largest = a[i];
        }
    }

    cout << "Largest element in the array is (Brute Force): " << largest << endl;
    return 0;
}
