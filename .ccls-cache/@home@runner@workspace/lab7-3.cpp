//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by Christopher Hall on 2/22/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int day = 1;
    int dailyText = 0;
    int totalText = 0;
    double averageText = 0.0;

    //input data


    //determine average
    while (day <= 7) {
        cout << "Enter the number of text messages you sent on day " << day << ": " << endl;
        cin >> dailyText;
        totalText += dailyText;
        day += 1;
    } //end while

    averageText = static_cast<double>(totalText) / 7;
    cout << fixed << setprecision(0);
    cout << "The average number of text messages sent each day is " << averageText << "." << endl;

    return 0;
}   //end of main function