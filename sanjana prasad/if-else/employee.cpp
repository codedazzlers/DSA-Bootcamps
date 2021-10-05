#include <iostream>

using namespace std;

int main()
{
    int age;
    char sex,married;
    cin>>age>>sex>>married;
    if(sex=='F'){
        std::cout << "urban area" << std::endl;
    }
    else if(sex=='M' && (age>20 && age<40)){
        std::cout << "anywhere" << std::endl;
    }
    else if(sex=='M' && (age>=40 && age<60)){
        std::cout << "urban area" << std::endl;
    }
    else std::cout << "ERROR" << std::endl;
    return 0;
}
