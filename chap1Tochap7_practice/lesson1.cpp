#include <iostream>
using namespace std;

int main() {
    int a{};
    int b{5};
    int c{6};
    int d{7};
    int e{};

    
    cout << "a = " << " b = " << b << " c = " << c << '\n';

    cout << "d lives at address " << &d 
            <<  " and takes " << sizeof(d) << " bytes\n";

    return 0;
}