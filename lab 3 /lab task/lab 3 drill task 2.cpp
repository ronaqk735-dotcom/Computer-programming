

#include <iostream>
using namespace std;

int main()
{
    float radius = 0, circumference = 1;  // initialize radius and circumference

    cout << "Enter radius of the circle: ";
    cin >> radius;  // take input from user

    circumference = 2 * 3.14159 * radius;  // calculate circumference

    // display radius and circumference
    cout << "Radius = " << radius << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;  // program ends
}


