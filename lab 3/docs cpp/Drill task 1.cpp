#include <iostream>
using namespace std;

int main() {
    // Step 1: Define variables
    double sub1, sub2, sub3, sub4, sub5;
    double average;

    // Step 2: Initialize variables
    sub1 = sub2 = sub3 = sub4 = sub5 = 0;

    // Step 3: Take input from user
    cout << "Enter marks for 5 subjects:" << endl;
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;

    // Step 4: Calculate average
    average = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    // Step 5: Display result
    cout << "Average marks = " << average << endl;

    return 0;
}
