#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Step 1: Define variables
    double a, b, c;
    double discriminant, root1, root2;

    // Step 2: Take input from user
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    // Step 3: Calculate discriminant
    discriminant = b*b - 4*a*c;

    // Step 4: Calculate roots based on discriminant
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "Root1 = " << root1 << endl;
        cout << "Root2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        cout << "Roots are real and equal." << endl;
        cout << "Root = " << root1 << endl;
    }
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-discriminant) / (2*a);
        cout << "Roots are complex." << endl;
        cout << "Root1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    // Step 5: Display result (already done above)
    return 0;
}

