#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
double hours, total, limit;
char package;

cout << "Choose your package A, B, C?: ";
package = cin.get();

if(package == 'A' || package == 'B' || package == 'C')
{

cout << "\nHours were used: ";
cin >> hours;


if(package == 'A')
{
limit = 995;
if(hours < 10)
{   
total = limit;
}
else
total = ((hours - 10) * 2) + limit;

cout << "The amount to pay: " << total << "\n\n";
}

if(package == 'B')
{
limit = 1495;
if(hours < 20)
total = limit;
else
total = ((hours - 20) * 1) + limit;

cout << "The amount to pay: " << total << "\n\n";
}

if(package == 'C')
{
limit = 1995;
total = limit;
cout << "The amount to pay: " << total << "\n\n";
}
}
else
cout << "Invalid input \n\n"
    << "Please choose A, B, or C only \n\n";

system("pause");

return 0;
}
