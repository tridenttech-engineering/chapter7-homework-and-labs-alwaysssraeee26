// Lab7-6.cpp - calculates and displays the average price
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price = 0.0;      // Variable to store the price input
    double totalPrice = 0.0; // Total of all prices
    int count = 0;           // Counter for the number of prices entered

    cout << "Enter prices. Enter -1 to finish." << endl;
    
    // Prompt the user for the first price
    cout << "Enter price: ";
    cin >> price;

    // Use a while loop to process the input until sentinel value (-1) is entered
    while (price != -1) {
        totalPrice += price; // Add the entered price to the total
        count++;             // Increment the counter

        // Ask for the next price
        cout << "Enter price: ";
        cin >> price;
    }

    // After the loop ends, calculate and display the average price if at least one price was entered
    if (count > 0) {
        double averagePrice = totalPrice / count;
        cout << fixed << setprecision(2); // Set the output format to 2 decimal places
        cout << "The average price is: $" << averagePrice << endl;
    } else {
        cout << "No prices entered." << endl; // If no prices were entered, display a message
    }

    return 0;
} // end of main function
