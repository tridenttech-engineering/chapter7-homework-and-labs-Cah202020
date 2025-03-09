//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by Christopher Hall on 2/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    double sales = 0.0;
    const double GROWTH_RATE = 0.055;
    double annualIncrease = 0.0;
    int years = 0;

    //input data
    cout << "Current year's sales: $";
    cin >> sales;

    //determine years to reach $150,000
    while (sales < 150000.0)
    {
        annualIncrease = sales * GROWTH_RATE;
        sales += annualIncrease;
        years += 1;
    } //end while

    //display results
    cout << fixed << setprecision(0);
    cout << "Sales " << years << " years from now: $" << sales << endl;

    return 0;
} //end of main function