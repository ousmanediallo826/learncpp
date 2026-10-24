#include <iostream>
#include <string>
#include <string_view>
using namespace std;


void printSV(string_view str) {
    cout << str << '\n';
}
int main() {

    cout << "Enter your age: ";
    int age{};
    cin >> age;
    const int constAge { age };
    age = 6;
    


    // 5.2 — Literals

    cout << 5 << '\n';
    cout << 5L << '\n';
    cout << 10U << '\n';



    // 5.3 — Numeral systems (decimal, binary, hexadecimal, and octal)
    int x { 013 };
    cout << x << '\n';

    int y { 0xF};
    cout << y << '\n';
    int bin {};
    bin = 0x0001;
    bin = 0x00FF;
    cout << bin << '\n';


    // 5.7 — Introduction to std::string

    cout << "Enter Your Full Name: ";
    string fname {};
    getline(cin >> ws, fname);

    cout << "Enter Your Favorite Color: ";
    string favoriteColor {};
    getline(cin >> ws, favoriteColor);

    cout << "Your name is " << fname << " and your favorite color color is '" << favoriteColor << "'.\n";

    // 5.8 — Introduction to std::string_view

    string_view s{"Hello World"};
    printSV(s);






    return 0;
}