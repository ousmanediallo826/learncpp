#include <iostream>
using namespace std;
#include <cmath>

int main() {

    // 8.2 — If statements and blocks

    cout << "Enter a number\n";

    int x{};
    cin >> x;

    if(x > 10) cout << x << " is greater than 10.\n";
    else cout << x << " is not greather than 10\n.";


    // 8.4 — Constexpr if statements

    constexpr double gravity {9.9};

    if(gravity == 9.8) {
        cout << "Gravity is normal.\n";
    }
    else {
        cout << "We are not on earth.\n";
    }


    // 8.7 — Goto statements
     double y{};
tryAgain: // this is a statement label
    std::cout << "Enter a non-negative number: ";
    std::cin >> y;

    if (y < 0.0)
        goto tryAgain; // this is the goto statement

    std::cout << "The square root of " << y << " is " << std::sqrt(y) << '\n';




    return 0;
}