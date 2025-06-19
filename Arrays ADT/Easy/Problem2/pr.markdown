Sure! Here's your C++-formatted **Problem Statement** for finding the second smallest and second largest elements in an array:

---

### 🧾 Problem Statement

**Title: Find Second Smallest and Second Largest in an Array**

Given an array of integers, your task is to write a C++ program to find:

* The **second smallest** element in the array.
* The **second largest** element in the array.

If either of them doesn’t exist (e.g., all elements are the same, or there's only one unique element), print `-1` for that value.

---

### 📥 Input:

* An integer `n` representing the size of the array.
* An array `arr[]` of `n` integers.

---

### 📤 Output:

* Print:

  ```
  Second Smallest : <value>
  Second Largest : <value>
  ```

  Replace `<value>` with `-1` if the respective element doesn’t exist.

---

### 🔍 Constraints:

* 1 ≤ n ≤ 1000
* -10⁵ ≤ arr\[i] ≤ 10⁵

---

### 💡 Example 1:

```
Input:
6
1 2 4 7 7 5

Output:
Second Smallest : 2
Second Largest : 5
```

**Explanation:**
The sorted unique elements are {1, 2, 4, 5, 7}, so second smallest = 2 and second largest = 5.

---

### 💡 Example 2:

```
Input:
1
1

Output:
Second Smallest : -1
Second Largest : -1
```

**Explanation:**
Only one element exists, so there is no second smallest or second largest.

---

Would you like the C++ code solution for this too?
