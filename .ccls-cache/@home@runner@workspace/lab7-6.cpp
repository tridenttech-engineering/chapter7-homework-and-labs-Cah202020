//Lab7-6.cpp - calculates and displays the average price
//Created/revised by Christopher Hall on 2/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrices = 0;    //counter
	double price = 0.0;
	double totalPrice = 0.0;  //accumulator
	double avgPrice = 0.0;

	cout << "Price (negative number to end): ";
	cin >> price;
	while (price >= 0.0)
	{
		numPrices += 1;
		totalPrice += price;
		if (price > 0.0) {
			cout << "Next price: ";
			cin >> price;
		}
	} //end while

	if (numPrices > 0)
		avgPrice = totalPrice / numPrices;
	else
		avgPrice = 0.0;
	// end if
	cout << fixed << setprecision(2) << endl;
	cout << "Average price: " << avgPrice << endl;
	return 0;
}	//end of main function