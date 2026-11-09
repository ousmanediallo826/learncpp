#include <iostream>
using namespace std;

void compare(int x, int y) {
   if (x > y)  cout << x << " is greater than " << y << '\n';
   else if (x < y)  cout << x << " is less than " << y << '\n';
   else  cout << x << " is equal to " << y << '\n';
   
}

// Informal testing
bool isLowerVoel(char c) {
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
        return false;

    }

}
int main() {

    // 9.1 — Introduction to testing your code
    int x{};
    int y{};

    cout << "Enter a number: ";
    cin >> x;

    cout << "Enter another number: ";
    cin >> y;

    compare(x,y);



    // Informal testing

    cout << isLowerVoel('a') << '\n';
    cout << isLowerVoel('b') << '\n';
    cout << isLowerVoel('u') << '\n';
    cout << isLowerVoel('2') << '\n';



    return 0;
}