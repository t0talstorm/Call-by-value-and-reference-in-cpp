# EXPERIMENT - 10 - CALL BY VALUE AND CALL BY REFERENCE IN C++

## Aim: To study and implement the concepts of call by value and call by reference in C++, understanding their differences and practical applications.

## Apparatus: VS Code or Online C++ Compiler

## Theory:

**Function Parameter Passing** in C++ can be done in two main ways: **Call by Value** and **Call by Reference**. Understanding these concepts is fundamental to effective C++ programming and memory management.

### Key Concepts:

1. **Call by Value**: In this method, a copy of the actual parameter's value is passed to the function. Changes made to the parameter inside the function do not affect the original variable.
   ```cpp
   void function(int x) {
       x = 10;  // Only changes the local copy
   }
   ```

2. **Call by Reference**: In this method, the memory address of the actual parameter is passed to the function. Changes made to the parameter inside the function directly affect the original variable.
   ```cpp
   void function(int* x) {
       *x = 10;  // Changes the original variable
   }
   ```

3. **Reference Parameters**: C++ also provides reference parameters using the & operator, which is another form of call by reference.
   ```cpp
   void function(int& x) {
       x = 10;  // Changes the original variable
   }
   ```

### Memory Management Concepts:
- **Stack Memory**: Where local variables and function parameters are stored
- **Address Operator (&)**: Used to get the memory address of a variable
- **Dereference Operator (*)**: Used to access the value at a memory address
- **Pointer Variables**: Variables that store memory addresses

### Why These Concepts Matter:
- **Memory Efficiency**: Avoiding unnecessary copying of large data structures
- **Function Design**: Understanding when to modify original data vs. working with copies
- **Performance Optimization**: Reference passing is faster for large objects
- **Data Integrity**: Controlling which functions can modify original data

## Programs:

### 1. Call by Value - Swap Function

---

**Description:** Demonstrates call by value where changes made inside the function do not affect the original variables in the calling function.

**Algorithm:**
1. Declare two integer variables in main function
2. Display the original values before function call
3. Call swap_by_value function passing the variables as parameters
4. Inside the function, attempt to swap the values using a temporary variable
5. Display the values after function call to show no change occurred
6. Observe that original variables remain unchanged

---

### 2. Call by Reference - Swap Function

---

**Description:** Demonstrates call by reference using pointers where changes made inside the function directly affect the original variables.

**Algorithm:**
1. Declare two integer variables in main function
2. Display the original values before function call
3. Call swap_by_reference function passing addresses of variables using & operator
4. Inside the function, use pointer dereferencing to swap the actual values
5. Display the values after function call to show successful swap
6. Observe that original variables have been modified

---

### 3. Employee Bonus Checking System

---

**Description:** A practical application demonstrating call by reference for modifying salary values based on employee performance criteria.

**Algorithm:**
1. Collect employee information: years of service, research projects, new projects, profit contribution
2. Convert user inputs to boolean flags for evaluation criteria
3. Pass employee data and salary pointer to EmployeeCheck function
4. Inside the function, count qualifying criteria (minimum 3 required for bonus)
5. If qualified, input current salary and calculate 20% bonus using pointer dereferencing
6. Return qualification status and display updated salary if eligible

---

### 4. String Reversal Using References

---

**Description:** Demonstrates call by reference using C++ reference parameters to reverse a string in-place without creating copies.

**Algorithm:**
1. Input a string from the user using getline for complete string input
2. Pass the string by reference to ReversingString function
3. Calculate string length and use two-pointer approach
4. Implement character swapping using reference parameters in swap_chars function
5. Swap characters from both ends moving towards center
6. Display the reversed string showing in-place modification

---

## Key Learning Outcomes:

1. **Parameter Passing Mechanisms**: Understanding the difference between value and reference passing
2. **Memory Address Manipulation**: Working with pointers and memory addresses effectively
3. **Function Design Principles**: Choosing appropriate parameter passing methods based on requirements
4. **Practical Applications**: Implementing real-world scenarios using call by reference
5. **Performance Considerations**: Understanding when to use references vs. values for efficiency

## Applications:
- **Data Structure Manipulation**: Modifying arrays, linked lists, and complex structures
- **Mathematical Computations**: Functions that need to return multiple values
- **System Programming**: Direct memory manipulation for hardware interaction
- **Object-Oriented Programming**: Efficient passing of large objects
- **Algorithm Implementation**: In-place sorting and searching algorithms
