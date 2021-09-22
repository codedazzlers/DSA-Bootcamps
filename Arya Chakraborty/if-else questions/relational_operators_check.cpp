#include <iostream>

using namespace std;

int main()
{
    int x=2;
    int y=5;
    int z=0;
    std::cout << (x==2) << std::endl;
    std::cout << (x!=5) << std::endl;
    std::cout << (x!=5 && y>=5) << std::endl;
    std::cout << (z!=0 || x==2) << std::endl;
    std::cout << (!(y<10)) << std::endl;
    return 0;
}
