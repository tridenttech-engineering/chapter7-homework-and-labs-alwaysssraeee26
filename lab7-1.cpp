// Lab7-1.cpp - Calculates the average number of text messages sent per day over 7 days
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  // Required for setprecision
using namespace std;

int main()
{
    int totalTexts = 0;   // Stores total messages sent over 7 days
    int dailyTexts = 0;   // Stores messages sent per day
    double average = 0.0; // Stores computed average

    // Loop exactly 7 times to collect input
    for (int day = 1; day <= 7; day++) 
    {
        cout << "How many text messages did you send on day " << day << "? ";
        
        while (!(cin >> dailyTexts) || dailyTexts < 0) { 
            cin.clear();  // Clear the error flag
            cin.ignore(10000, '\n');  // Discard invalid input
            cout << "Invalid input. Please enter a non-negative number: ";
        }

        totalTexts += dailyTexts;
    }

    // Compute average (ensuring floating-point division)
    average = static_cast<double>(totalTexts) / 7.0;

    // Output formatted result
    cout << fixed << setprecision(1);
    cout << "\nYou sent approximately " << average << " text messages per day.\n";

    return 0;
}

