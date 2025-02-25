// Lab7-2.cpp - Displays the number of years required
// for a company's sales to reach at least $150,000
// using a 5.5% annual growth rate. Also displays
// the sales at that time.
// Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>

int main() {
    const double GROWTH_RATE = 0.055;
    double sales = 0.0;
    int years = 0;

    std::cout << "Current year's sales: ";
    std::cin >> sales;

    while (sales < 150000.0) {
        sales += sales * GROWTH_RATE;
        years++;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Sales " << years << " years from now: $" << sales << std::endl;

    return 0;
}

