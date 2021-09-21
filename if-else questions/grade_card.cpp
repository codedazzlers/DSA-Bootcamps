#include <iostream>

using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        std::cout << "F" << std::endl;
    }
    else if (marks >= 25 && marks < 45)
    {
        std::cout << "E" << std::endl;
    }
    else if (marks >= 45 && marks < 50)
    {
        std::cout << "D" << std::endl;
    }
    else if (marks >= 50 && marks < 60)
    {
        std::cout << "C" << std::endl;
    }
    else if (marks >= 60 && marks <= 80)
    {
        std::cout << "B" << std::endl;
    }
    else if (marks > 80)
    {
        std::cout << "A" << std::endl;
    }
    return 0;
}
