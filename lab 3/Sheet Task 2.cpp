#include <iostream>
using namespace std;

int main() {
    // Step 1: Define variables
    double initial_velocity, final_velocity, acceleration, time;

    // Step 2: Initialize variables
    initial_velocity = 0;
    final_velocity = 0;
    acceleration = 0;
    time = 0;

    // Step 3: Input from user
    cout << "Enter initial velocity (v_i) in m/s: ";
    cin >> initial_velocity;

    cout << "Enter acceleration (a) in m/s^2: ";
    cin >> acceleration;

    cout << "Enter time (t) in seconds: ";
    cin >> time;

    // Step 4: Calculate final velocity
    final_velocity = initial_velocity + (acceleration * time);

    // Step 5: Display results
    cout << "\n--- Results ---" << endl;
    cout << "Initial Velocity (v_i) = " << initial_velocity << " m/s" << endl;
    cout << "Acceleration (a) = " << acceleration << " m/s^2" << endl;
    cout << "Time (t) = " << time << " s" << endl;
    cout << "Final Velocity (v_f) = " << final_velocity << " m/s" << endl;

    return 0;
}

