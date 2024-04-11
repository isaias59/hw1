#include <iostream>
#include "convert_knots.hpp"

using namespace std;

int main ()
{
    double knots;
    cout << "\n ENTER YOUR KNOTTS: " << '\n';
    cin >> knots;
    cout << "\nHere is your knotts: " << knots_to_miles_per_minute(knots);

    return 0;
}

