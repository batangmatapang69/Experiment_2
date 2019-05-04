#include <iostream>
using namespace std;

int main()
{
    int n, i, sum;
do{
    cout << "Enter a number: ";
    cin >> n;

    for (i = 1; i <= n; ++i) {
        sum += i;
    }
 
    if (n <= 0)
    {
    cout << "Thank you";
}
    if (n > 0)
    

    cout << "Sum of all whole numbers from 1 to "; cout << n; cout << " is " << sum;

    
    return 0;
    }while (n=0)
}

