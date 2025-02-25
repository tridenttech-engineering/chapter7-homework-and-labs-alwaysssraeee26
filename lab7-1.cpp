//Lab7-1.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int totalTexts = 0;
    int dailyTexts = 0;
    double average = 0.0;

    for (int day = 1; day <= 7; day++) // Loop for 7 days
    {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;
        totalTexts += dailyTexts;
    }

    average = static_cast<double>(totalTexts) / 7.0; // Divide by 7 explicitly

    cout << fixed << setprecision(1); // Set precision to 1 decimal place
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;

    return 0;
}
