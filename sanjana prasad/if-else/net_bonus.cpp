#include <iostream>

using namespace std;

int main()
{
    int term;
    double salary,bonus=0.0;
    cin>>term;
    if(term>5){
        cin>>salary;
        bonus=0.05*salary;
        std::cout << bonus << std::endl;
    }
    else
    std::cout << bonus << std::endl;
    return 0;
}
