#include <iostream>
using namespace std;

int main() {
    // Step 1: Define variables
    double voltage, current, resistance;

    // Step 2: Initialize variables
    voltage = 0;
    current = 0;
    resistance = 0;

    // Step 3: Input voltage and current from user
    cout << "Enter voltage (V) in volts: ";
    cin >> voltage;

    cout << "Enter current (I) in amperes: ";
    cin >> current;

    // Step 4: Calculate resistance
    if(current != 0) {
        resistance = voltage / current;
    } else {
        cout << "Current cannot be zero!" << endl;
        return 0;
    }

    // Step 5: Display results
    cout << "\n--- Results ---" << endl;
    cout << "Voltage (V) = " << voltage << " V" << endl;
    cout << "Current (I) = " << current << " A" << endl;
    cout << "Resistance (R) = " << resistance << " ohms" << endl;

    return 0;
}

