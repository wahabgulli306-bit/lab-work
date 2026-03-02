#include <iostream>
using namespace std;

int main() {
    // Step 1 & 2: Define variables
    double R1, R2;           // Resistances
    double I_total;          // Total current
    double I1, I2;           // Branch currents

    // Step 3: Initialize variables
    R1 = R2 = 0;
    I_total = 0;
    I1 = I2 = 0;

    // Step 4: Take input from user
    cout << "Enter first resistor (R1): ";
    cin >> R1;

    cout << "Enter second resistor (R2): ";
    cin >> R2;

    cout << "Enter total current (I_total): ";
    cin >> I_total;

    // Step 5: Calculate branch currents
    I1 = (R2 / (R1 + R2)) * I_total;
    I2 = (R1 / (R1 + R2)) * I_total;

    // Step 6: Display results
    cout << "\n--- Results ---" << endl;
    cout << "R1 = " << R1 << " ohms" << endl;
    cout << "R2 = " << R2 << " ohms" << endl;
    cout << "Total Current = " << I_total << " A" << endl;

    cout << "Current through R1 (I1) = " << I1 << " A" << endl;
    cout << "Current through R2 (I2) = " << I2 << " A" << endl;

    return 0;
}

