








## Problem:

    **Quesion Title: Find the Second Largest Element in an Array**

    **Question Description:**
        You are given an array of integers, and your task is to find the second largest element in the array using pointers. Write a C++ program to accomplish this task.

    **Input:**
        The input consists of two lines. The first line contains an integer `n` (2 <= n <= 100), which represents the number of elements in the array. The second line contains `n` space-separated integers, each representing an element of the array.

    **Output:**
        Output a single integer, which is the second largest element in the array.

   

        ```cpp
        int findSecondLargest(int *arr, int n);
        ```

    **Sample Input:**
    ```
    6
    12 45 9 27 36 45
    ```

    **Sample Output:**
    ```
    36
    ```

    **Explanation:**

    In the given sample, there are 6 elements in the array: {12, 45, 9, 27, 36, 45}. The second largest element is 36, which is the output of the program. Note that even though 45 appears twice in the array, we are looking for the second largest distinct element.

    **Note:**

    - You are required to use pointers to access and manipulate array elements.
    - You should not use standard library functions (e.g., `std::sort`) to find the second largest element.
    - Ensure that you handle cases where the array does not have a second largest element (e.g., when all elements are the same).
    - Your program should have a time complexity of O(n), where n is the number of elements in the array.