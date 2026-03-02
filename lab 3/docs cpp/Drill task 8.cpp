#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Step 1: Define variables
    double base, perpendicular, hypotenuse;

    // Step 2: Take input from user
    cout << "Enter base: ";
    cin >> base;

    cout << "Enter perpendicular: ";
    cin >> perpendicular;

    // Step 3: Calculate hypotenuse
    hypotenuse = sqrt(base*base + perpendicular*perpendicular);

    // Step 4: Display result
    cout << "Hypotenuse = " << hypotenuse << endl;

    return 0;
}

