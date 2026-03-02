#include <iostream>
using namespace std;

int main() {
    // Step 1: Define variables
    double length, width, area, perimeter;

    // Step 2: Initialize variables
    length = 0;
    width = 0;
    area = 1;
    perimeter = 1;

    // Step 3: Take input from user
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter width of rectangle: ";
    cin >> width;

    // Step 4: Calculate area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Step 5: Display results
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}

