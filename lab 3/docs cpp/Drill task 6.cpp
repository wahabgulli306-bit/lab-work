#include <iostream>
using namespace std;

int main() {
    // Step 1 & 2: Define variables
    double R1, R2, R3;        // Star resistances
    double RAB, RBC, RCA;     // Delta resistances

    // Step 3: Initialize variables (optional)
    R1 = R2 = R3 = 0;

    // Step 4: Take input from user
    cout << "Enter Star Resistances (R1, R2, R3): ";
    cin >> R1 >> R2 >> R3;

    // Step 5: Calculate Delta resistances
    double sum = (R1*R2 + R2*R3 + R3*R1);

    RAB = sum / R3;
    RBC = sum / R1;
    RCA = sum / R2;

    // Step 6: Display results
    cout << "\n--- Delta Resistances ---" << endl;
    cout << "RAB = " << RAB << " ohms" << endl;
    cout << "RBC = " << RBC << " ohms" << endl;
    cout << "RCA = " << RCA << " ohms" << endl;

    return 0;
}

