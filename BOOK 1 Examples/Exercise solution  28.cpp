// Name: Shahzad faisal
// Department: Electrical Engineering (Power)
// Registration No: BF25NWELE0733
// Section: A

#include <iostream>   // Library for input and output
using namespace std;  // Allows us to use cout and cin without std::

// Function declaration (prototype)
int hcf(int n1, int n2);

int main()
{
    int n1, n2;   // Variables to store two numbers

    cout << "Enter two positive integers: ";  // Ask user for input
    cin >> n1 >> n2;  // Take input from user

    // Call hcf function and display result
    cout << "H.C.F of " << n1 << " & " << n2 << " is: " << hcf(n1, n2);

    return 0;   // End of program
}

// Function definition using recursion (Euclidean Algorithm)
int hcf(int n1, int n2)
{
    if (n2 != 0)   // If second number is not zero
        return hcf(n2, n1 % n2);   // Recursive call with (n2, remainder)
    else
        return n1;   // When remainder becomes 0, n1 is the HCF
}