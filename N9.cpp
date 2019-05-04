#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	
int row, column, horizontal, vertical;
	
cout << "How many rows: ";
cin >> row;

cout << "How many columns: ";  	
cin >> column;

for (horizontal = 1; horizontal <= row; horizontal++ )
{
for (vertical = 1; vertical <= column; vertical++ )
	{
	if (horizontal == 1 || horizontal == row || 
	    vertical == 1 || vertical == column )
	cout << "*";
	else 
	cout << "*";
	}

	cout << "\n";
}




return 0; 
}
