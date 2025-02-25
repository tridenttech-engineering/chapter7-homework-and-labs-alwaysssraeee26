// Lab7-3.cpp - calculates the average number of text
// messages sent each day for 7 days
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int day = 1;              // Start from day 1
    int totalTexts = 0;       // Total messages over 7 days
    int dailyTexts = 0;       // Messages per day
    double average = 0.0;     // Stores computed average

    // Test data for 7 days
    int testData[] = {76, 80, 100, 43, 68, 70, 79};

    // Use a while loop to process the 7 days of data
    while (day <= 7) 
    {
        // Assign the daily texts from the test data array
        dailyTexts = testData[day - 1];  // Indexing starts from 0

        // Add the daily texts to the total
        totalTexts += dailyTexts;

        // Increment the day counter
        day++;
    }

    // Compute the final average after the loop
    average = static_cast<double>(totalTexts) / 7.0;

    // Print the results
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately " << average << " text messages per day." << endl;

    return 0;
} // end of main function
