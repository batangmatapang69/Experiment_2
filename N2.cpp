#include <iostream>
#include <conio.h>

using namespace std;

int main()

{	
	int usedGallons;
	float pastMonth, totalCost;
	const float demandCharge = 35, conCharge = 1.10; 

	cout << "Enter balance from the past: "; cin >> pastMonth; 
	cout << "Enter gallons used this month: "; cin >>	usedGallons;
	
	if (pastMonth < 0 || usedGallons < 0 ) 
	cout << "That's not right" << endl;

	else if (pastMonth > 0) 
		{
			totalCost = demandCharge + (conCharge * usedGallons) + pastMonth + 20;
			cout << "\nBalance to pay: P" << totalCost << endl;
		}

	else  
		{
			totalCost = demandCharge + (conCharge * usedGallons);
			cout << "\nBalance to pay: P" << totalCost << endl;
		}

	_getch();
	return 0;
}

