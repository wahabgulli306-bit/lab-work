#include <iostream>
using namespace std;

int main() {
    // Step 1 & 2: Define variables
    double R1, R2, R_total;

    // Step 3: Initialize variables
    R1 = R2 = 0;
    R_total = 0;

    // Step 4: Take input from user
    cout << "Enter first resistor (R1): ";
    cin >> R1;

    cout << "Enter second resistor (R2): ";
    cin >> R2;

    // Step 5: Calculate net resistance
    R_total = (R1 * R2) / (R1 + R2);

    // Step 6: Display results
    cout << "\n--- Results ---" << endl;
    cout << "R1 = " << R1 << " ohms" << endl;
    cout << "R2 = " << R2 << " ohms" << endl;
    cout << "Net Resistance (Parallel) = " << R_total << " ohms" << endl;

    return 0;
}

