# 🌀 Left Rotate an Array by One Place

## Problem Statement

Given an array of N integers, left rotate the array by one place.

---

## Examples

### Example 1:

**Input:**
`N = 5`
`array[] = {1,2,3,4,5}`

**Output:**
`2,3,4,5,1`

**Explanation:**
Since all the elements in array will be shifted toward left by one so ‘2’ will now become the first index and and ‘1’ which was present at first index will be shifted at last.

---

### Example 2:

**Input:**
`N = 1`
`array[] = {3}`

**Output:**
`3`

**Explanation:**
Here only element is present and so the element at first index will be shifted to last index which is also by the way the first index.

---

> **Disclaimer:** Don’t jump directly to the solution, try it out yourself first.

---

## ✅ Practice:

**Solve Problem**

---

## 💡 Brute Force Approach

### Algorithm / Intuition

**Solution 1: Brute Force Approach**

**Intuition:**
We want to move every number one position to the left. The first number goes to the end, and all other numbers just move one step forward. To do this easily, we can make a new array and copy each number to its new position.

**Approach:**

1. Create a new array of the same size.
2. Start from the second element of the original array and copy each to the front of the new array.
3. Finally, put the first element of the original array at the end of the new array.
4. Print the new array.

---

### Code

#### C++

```cpp
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp[n];
  for (int i = 1; i < n; i++) {
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
  cout << endl;
}

int main() {
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, n);
}
```

**Output:**
`2 3 4 5 1`

---

### Complexity Analysis

* **Time Complexity:** O(n), as we iterate through the array only once.
* **Space Complexity:** O(n) as we are using another array of size, same as the given array.

---

## 🔧 Optimal Approach

### Algorithm / Intuition

**Solution 2:**

**Intuition:**
Instead of using a new array, we can just move each number one step to the left in the same array. But before doing that, we save the first number because it will get lost during shifting. After shifting, we place that saved number at the end of the array.

**Approach:**

1. Save the first element in a variable.
2. Move each element one position to the left (just copy the next element to the current one).
3. After the loop ends, put the saved first element at the last position.
4. Print the updated array.

---

### Code

#### C++

```cpp
#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
  int temp = arr[0]; // storing the first element of array in a variable
  for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];
  }
  arr[n - 1] = temp; // assigned the value of variable at the last index
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int n = 5;
  int arr[] = {1, 2, 3, 4, 5};
  solve(arr, n);
}
```

**Output:**
`2 3 4 5 1`

---

### Complexity Analysis

* **Time Complexity:** O(n), as we iterate through the array only once.
* **Space Complexity:** O(1) as no extra space is used.
