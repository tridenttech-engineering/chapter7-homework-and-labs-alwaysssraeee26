#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double bill = 0.0;          // Variable to store the monthly bill
    double totalBills = 0.0;    // Variable to store the total of all bills
    double avgBill = 0.0;       // Variable to store the average bill
    int months = 0;             // Counter for the number of months

    // Ask for the first bill input
    cout << "Bill for month 1: ";
    cin >> bill;

    // While loop to handle multiple months until sentinel value is entered
    while (bill >= 0.0) {
        totalBills += bill;     // Add the current bill to the total
        months += 1;            // Increment the month counter
        cout << "Bill for month " << months + 1 << ": ";
        cin >> bill;            // Get the next month's bill
    }

    // If there are any months entered, calculate the average
    if (months > 0) {
        avgBill = totalBills / months;
        cout << fixed << setprecision(2);  // Set the precision for currency output
        cout << "Average electric bill for " << months << " months: $" << avgBill << endl;
    } else {
        cout << "No bill amount entered." << endl;  // If no valid input was given
    }

    return 0;
}
