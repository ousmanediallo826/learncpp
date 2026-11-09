#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

void ignoreLine() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

// returns true if extraction failed, false otherwise

bool clearFailedExtraction() 
{
    if(!cin) {
        if (cin.eof()){
            exit(0);
        }

        cin.clear();
        ignoreLine();

        return true;
    }

    return false;
}

double getDouble() 
{
    while(true) {
        cout << "Enter a decimal number: ";
        double x{};
        cin >> x;

        if(clearFailedExtraction()) {
            cout << "Oops, that input is invalid.  Please try again.\n";
            continue;
        }
        ignoreLine();
        return x;
    }
}

char getOperator()
{
    while(true) {
        cout << "Enter one of the following: +, -, *, or /: ";
        char operation{};
        cin >> operation;

        if(!clearFailedExtraction()){
            ignoreLine();
        }

        switch (operation)
        {
        case '+':
        case '-':
        case '*':
        case '/':
            return operation;
        
        default:
            cout << "Oops, that input is invalid.  Please try again.\n";
        }

    }
    
}

void printResult(double x, char operation, double y) {
    cout << x << operation << y << '\n';

    switch (operation)
    {
    case '+':
        cout << x + y << '\n';
    case '-':
         cout << x - y << '\n';
    case '*':
         cout << x * y << '\n';
    case '/':
         if(y == 0.0) {
            break;
         }
         cout << x / y << '\n';
         return;
    }
    cout << '???';
}
int main() {

    double x{ getDouble()};
    char operation { getOperator() };
    double y { getDouble() };
    while(operation == '/' && y == 0.0) {
        cout << "The denominator cannot be zero.  Try again.\n";
        y = getDouble();
    } 
    printResult(x, operation, y);

    return 0;
}