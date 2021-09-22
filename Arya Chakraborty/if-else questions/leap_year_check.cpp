#include <iostream>

using namespace std;

int main()
{
    int year;
    cin>>year;
    if(year%400==0){
        std::cout << "leap year" << std::endl;
    }
    else if(year%100==0){
        std::cout << "non-leap year" << std::endl;
    }
    else if(year%4==0){
        std::cout << "leap year" << std::endl;
    }
    else{
        std::cout << "non-leap year" << std::endl;
    }
    return 0;
}
