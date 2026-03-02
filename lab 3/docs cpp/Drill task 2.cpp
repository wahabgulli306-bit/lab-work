#include <iostream>
using namespace std;

int main() {
    // Step 1: Define variables
    double radius, circumference;

    // Step 2: Initialize variables
    radius = 0;
    circumference = 1;

    // Step 3: Take input from user
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // Step 4: Calculate circumference
    circumference = 2 * 3.1416 * radius;

    // Step 5: Display result
    cout << "Radius = " << radius << endl;
    cout << "Circumference = " << circumference << endl;

    return 0;
}

