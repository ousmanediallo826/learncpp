#include <iostream>
#include <string>


template <typename T>
constexpr bool is_lvalue(T&)
{
    return true;
}
template <typename T>
constexpr bool is_lvalue(T&&)
{
    return false;
}
#define PRINTVCAT(expr) { std::cout << #expr << " is an " << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n"); }

int getInt() {return 5;}



// const references, no copy and no changes

void printName(const std::string& name)
{
    std::cout << name << '\n'; 
}

void addBonusRef(int& score)
{
    score += 10;
}

void addBonusPtr(int* score)
{
    if (score == nullptr)
    {
        return;
    }
    *score += 10;
}

void swapValues(int& f, int& g)
{
    int temp{f};
    f = g;
    g = temp;


}
int main()
{
    PRINTVCAT(5);        // rvalue
    PRINTVCAT(getInt()); // rvalue
    int x { 5 };
    PRINTVCAT(x);        // lvalue
    PRINTVCAT(std::string {"Hello"}); // rvalue
    PRINTVCAT("Hello");  // lvalue
    PRINTVCAT(++x);      // lvalue
    PRINTVCAT(x++);      // rvalue



    // Lvalue reference variables
    int y { 5 };
    int& ref { y };

    std::cout << y << ref << '\n';

    y = 6;

    std::cout << x  << ref << '\n';

    ref = 7;

    std::cout << x << ref << '\n';



    // references
    int z{ 5 };
    int& refe{ z };

    refe = 10;

    std::cout << "z = " << z << '\n';
    std::cout << "address of z:   " << &z << '\n';
    std::cout << "address of refe: " << &refe << '\n';


    // const references, no copy and no changes

    // std::cout << printName("Ousmane Diallo") << '\n';


    // pointers, a variable that holds an address
    int e { 5 };
    int* ptr{ &e };

    std::cout << "e    = " << e << '\n';
    std::cout << "&e   = " << &e << '\n';
    std::cout << "ptr  = " << ptr << '\n';
    std::cout << "*ptr = " << *ptr << '\n';
    std::cout << "sizeof(ptr) = " << sizeof(ptr) << " bytes\n";

    *ptr = 10;
    std::cout << "after *ptr = 10, e = " << e << '\n';



    int a { 5 };
    int b { 7 };

    int* pttr { &a };
    pttr = &b;
    *pttr = 1;
    std::cout << a << ' ' << b << '\n';



    // Pass by address: a pointer as a parameter

    int s { 50 };
    addBonusRef(s);
    addBonusPtr(&s);
    addBonusPtr(nullptr);
    std::cout << s << '\n';
    int f{3};
    int g{8};   
    
    



    return 0;

}