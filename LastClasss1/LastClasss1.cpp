// LastClasss1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 1. Pass by Value
// --- Creates a copy of the data; changes don't affect the original
// 2. Pass by Reference
// // --- Uses an alias (reference) to the original data; changes affect the original.
// 3. Pass by Address
// -- Passes the memory address using pointers; also affects the original.
// | Method | Syntax | Original Modified? | Memory | Nullable? |
//  | -------- | -------- | ------------------ - | -------- | ---------- - |
//  | **Value * *| `void func(int x)` | No | Copy created | N / A |
//  | **Reference * *| `void func(int& x)` | Yes | No copy(alias) | No |
//   | **Address * *| `void func(int* x)` | Yes | Pointer(8 bytes) | Yes |


  //    -**Pass   by Value * *: Small simple types, when you need a copy
 //     - **Pass by Reference * *: Large objects, when you want to modify original without pointer syntax
  //    - **Pass by Address * *: When null is acceptable, C compatibility, or reassigning the pointer itself



#include <iostream>
using namespace std;

void passByValue(int x) {
    x = 100;  // Changes only the copy
    cout << "Inside function: " << x << endl;
}

void passByReference(int& x) {  // '&' indicates reference
    x = 100;  // Changes the original value
    cout << "Inside function: " << x << endl;
}

void passByAddress(int* x) {  // Receives pointer
    *x = 100;  // Dereference to modify original
    cout << "Inside function: " << *x << endl;
}



int main() {
    int num = 10;
    cout << "Before: " << num << endl;  // 10

    passByValue(num);
    cout << "After: " << num << endl;   // Still 10 (unchanged)

    cout << "Before: " << num << endl;  // 10
    passByReference(num);
    cout << "After: " << num << endl;   // 100 (changed!)

    cout << "Before: " << num << endl;  // 10
    passByAddress(&num);  // Pass address using &
    cout << "After: " << num << endl;   // 100 (changed!)

    return 0;
}


 