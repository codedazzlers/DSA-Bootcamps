#include <iostream>

using namespace std;

int main()
{
    char c;
    cin>>c;
    int x=(int)c;
    if(c>=97 && c<=122){
        std::cout << "lowercase" << std::endl;
    }
    else if(c>=65 && c<=90){
        std::cout << "uppercase" << std::endl;
    }
    return 0;
}
