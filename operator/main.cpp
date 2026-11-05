#include <iostream>
using namespace std;

int getValue() {
    cout << "Enter a number: ";
    int a{};
    cin >> a;
    return a;
}
int main() {


    // 6.2 — Arithmetic operators
    constexpr int x{7};
    constexpr int y{4};

    cout << "int  / int = " << x / y << '\n';
    cout << "double / int = " << static_cast<double>(x) / y << '\n';
    cout << "int / double = " <<  x / static_cast<double>(y) << '\n';
    cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';



    // 6.3 — Remainder and Exponentiation

    cout << "Enter an integer: ";
    int num1{};
    cin >> num1;


    cout << "Enter another integer: ";
    int num2{};
    cin >> num2;

    cout << "The remainder of num1 and num2 is " << num1 % num2 << '\n';

    if ((num1 % num2) == 0) {
        cout << num1 << " is evenly divisible by " << num2 << '\n';

    }
    else {
        cout << num1 << " is not evenly divisible by " << num2 << '\n';
    }


    // 6.6 — The conditional operator

    int b{ getValue()};
    int c{ getValue()};

    int max{(b > c) ? b : c};

    cout << "The max of " << b <<" and " << c << " is " << max << ".\n";

    








    return 0;
}