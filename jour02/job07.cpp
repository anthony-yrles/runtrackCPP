#include <iostream>

using namespace std;

int main() {
    // Declare variables
    int a;
    int b;

    // Ask for two numbers
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;

    // Check if a is less than b
    if (a < b) {
        //  if Yes, loop for from a to b with increment of 1
        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
        // if No, loop for from a to b with decrement of 1
    } else {
        for (int i = a; i >= b; i--) {
            cout << i << endl;
        }
    }
}