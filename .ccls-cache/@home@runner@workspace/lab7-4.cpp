//Lab7-4.cpp - displays the average electric bill
//Created/revised by Christopher Hall on 2/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//declare variables
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;

	cout << fixed << setprecision(2);

	while (bill >= 0.0) {
		cout << "Bill for month " << months + 1 << ": ";
		cin >> bill;
		if (bill < 0.0) {
			break;
		}
		totalBills += bill;
		months += 1;

		if (months > 0) {
			avgBill = totalBills / months;
			cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
		}
		else
			cout << "No bill amount entered." << endl;
	} //end while



	return 0;
}	//end of main function