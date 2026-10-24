#include <iostream>
#include <limits>
using namespace std;


int main() {


    // 4.6 — Fixed-width integers and size_t
    int32_t x {32767};
    x = x + 1;
    cout << x << '\n';


    // 4.8 — Floating point numbers

    cout << boolalpha;
    cout << "float: " << numeric_limits<float>::is_iec559 << '\n';
    cout << "double: " << numeric_limits<double>::is_iec559 << '\n';
    cout << "long double: " << numeric_limits<long double>::is_iec559 << '\n';




    return 0;
}