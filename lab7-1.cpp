// Lab7-1.cpp - Calculates the average number of text messages sent per day over 7 days
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>  // Required for setprecision
using namespace std;

int main()
{
    int totalTexts = 0;   // Store total messages sent
    int dailyTexts = 0;   // Store daily input
    double average = 0.0; // Store computed average

    // Loop exactly 7 times to collect input
    for (int day = 1; day <= 7; day++) 
    {
        cout << "How many text messages did you send on day " << day << "? ";
        cin >> dailyTexts;

        // Validate input (optional, prevents negative values)
        if (dailyTexts < 0) {
            cout << "Invalid input. Please enter a non-negative number." << endl;
            day--;  // Repeat the same day input
            continue;
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
