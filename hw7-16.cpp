// hw7-16.cpp - displays three tip amounts
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double bill = 0.0;
    double tip = 0.0;

    cout << "Bill amount: ";
    cin >> bill;

    cout << fixed << setprecision(2);  // Ensures that both the tip and bill are displayed with two decimal places

    // Loop through 10%, 15%, and 20% tip rates
    for (double rate = 0.10; rate <= 0.20; rate += 0.05)
    {
        tip = bill * rate;
        cout << rate * 100 << "% tip: $" << tip << endl;
    }

    return 0;
}   // end of main function
