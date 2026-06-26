#include <iostream>
using namespace std;

int main()
{
    // 5 integers store karne ke liye array declare kiya
    int numbers[5];

    int sum = 0;  
    // sum variable banaya jisme total jama hoga

    // user se 5 numbers input lena
    cout << "Enter 5 numbers:" << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];  
        // har number array me store ho raha hai

        sum = sum + numbers[i];  
        // har number ko sum me add kar rahe hain
    }

    // total sum display karna
    cout << "Sum of all numbers = " << sum << endl;

    return 0; // program ka successful end
}