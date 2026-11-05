#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

void sayHi();
int main() {

    // 7.1 — Compound statements (blocks)

    int value{};
    add(3,4);



    // Using blocks to execute multiple statements conditionally

    cout << "Enter an integer: ";
    cin >> value;

    if(value >=0) {
        cout << value << " is a positive integer ( or zero)\n";
        cout << "Double this number is " << value * 2 << '\n';
    }
    else {
        cout << value << " is a negative number\n";
        cout << "The positve of this number is " << -value << '\n';
    }


    // Block nesting levels

    if(value > 0) {
        if (value % 2 == 0) {
            cout << value << " is an even number.";
        }
        else {
            cout << value << " is an odd number.";
        }
    };


    sayHi();


    return 0;
}