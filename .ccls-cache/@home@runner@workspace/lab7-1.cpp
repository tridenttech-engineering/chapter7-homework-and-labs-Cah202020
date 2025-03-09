//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Christopher Hall on 2/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int day = 0;
    int dailyText = 0;
    int totalText = 0;
    double averageText = 0.0;

    for (day = 1; day <= 7; day += 1) {
        cout << "Enter the number of text messages you sent on day " << day << ": ";
        cin >> dailyText;
        totalText += dailyText;
    } //end for

    averageText = static_cast<double>(totalText) / 7;
    cout << fixed << setprecision(0);
    cout << "The average number of text messages sent each day is " << averageText << "." << endl;

    return 0;
}   //end of main function
