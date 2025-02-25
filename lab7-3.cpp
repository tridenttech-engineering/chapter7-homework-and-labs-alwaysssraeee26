// Lab7-3.cpp - calculates the average number of text
// messages sent each day for 7 days
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int totalTexts = 0;   // Total messages over 7 days
    int dailyTexts = 0;   // Messages per day
    double average = 0.0; // Stores computed average
    int day = 1;          // Day counter, starting from 1

    // Use while loop to get input for 7 days
    while (day <= 7) 
    {
        cout << "How many text messages did you send on day " << day << "? ";

        // Test data: 76, 80, 100, 43, 68, 70, 79
        switch (day) {
            case 1: dailyTexts = 76; break;
            case 2: dailyTexts = 80; break;
            case 3: dailyTexts = 100; break;
            case 4: dailyTexts = 43; break;
            case 5: dailyTexts = 68; break;
            case 6: dailyTexts = 70; break;
            case 7: dailyTexts = 79; break;
            default: break;
        }

        totalTexts += dailyTexts;
        day++;  // Move to the next day
    }

    // Compute the final average after the loop
    average = static_cast<double>(totalTexts) / 7.0;

    // Print the results
    cout << "\nFinal Results:\n";
    cout << "Total Texts Sent: " << totalTexts << endl;
    cout << "Final Average Messages Per Day: " << fixed << setprecision(1) << average << endl;

    return 0;
}   // end of main function
