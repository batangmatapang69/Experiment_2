#include <iostream>

using namespace std;

int main()
{    
    float num1, num2, num3;

    cout << "Enter three numbers (press enter after putting a digit): ";
    cin >> num1 >> num2 >> num3;

    if(num1 >= num2 && num1 >= num3)
    {
        cout << "Largest number: " << num1;
    }

    if(num2 >= num1 && num2 >= num3)
    {
        cout << "Largest number: " << num2;
    }

    if(num3 >= num1 && num3 >= num2) {
        cout << "Largest number: " << num3;
    }

    return 0;
}
