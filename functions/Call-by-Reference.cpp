#include <iostream>
using namespace std;

// Call by reference using pointers(pointer reference)
void swapPointer(int *a, int *b) // declaring a function that takes two integer pointers as arguments/parameters..
{
    int temp = *a; // Dereferencing a to get its value
    *a = *b;       // Dereferencing a to assign the value at b's address
    *b = temp;     // Dereferencing b to assign the stored value of temp
}



// Call by reference using c++ reference variables
void swapReferenceVar(int &a, int &b) // a pointing to (a) of int main and b pointing to (b) of int main
{
    int temp = a; 
    a = b;       
    b = temp;     
}

int main()
{
    int a = 4, b = 5;
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    // swapPointer(&a, &b); // passing the addresses of the variables a and b to the swapPointer function.
    swapReferenceVar(a, b);
    cout << "The value of a is " << a << " and the value of b is " << b << endl;
    return 0;
}








