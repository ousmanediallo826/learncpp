#include <iostream>
constexpr int minScore{ 0 };
constexpr int maxScore{ 100 };
constexpr int passingScore{ 60 };
bool isValidScore(int score)
{
    return (score >= minScore && score <= maxScore);
    

}
void printResult(int score)
{
    std::cout << (!isValidScore(score) ? "Invalid Input" : (score >= passingScore ? "pass" : "fail"));
}
int main() 
{
    printResult(72);
    printResult(59);
    printResult(60);
    printResult(-5);
    printResult(101);

    return 0;
}