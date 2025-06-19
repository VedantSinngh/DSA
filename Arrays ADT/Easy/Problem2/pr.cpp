#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
Solution 1: (Brute Force) [this approach only works if there are no duplicates]
Intuition:
What do we do to find the largest or the smallest element present in an array? We ideally sort them and the first element would be the smallest of all while the last element would be the largest. Can we find the second-smallest and second-largest using a similar approach?

Approach:
Sort the array in ascending order
The element present at the second index is the second smallest element
The element present at the second index from the end is the second largest element
*/


void getElements(int arr[], int n){

    if(n==0 || n==1)
        cout<<-1<<" "<<-1<<endl;

    // sort the arr
    sort(arr,arr + n);

    int small = arr[1];
    int seclarge = arr[n - 2];

    // print the 2 smallest number 
    cout << "second smallest element: " << arr[1] << endl;
    // print the 2 largest number
    cout << "second largest element: " << seclarge << endl;


}


int main() {

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    getElements(arr, n);

    return 0;
}