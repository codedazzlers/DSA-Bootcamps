#include <iostream>

using namespace std;

int main()
{
    double classes_held,classes_attended;
    cin>>classes_held>>classes_attended;
    double attendance=(classes_attended/classes_held)*100;
    std::cout << "attendance = " << attendance << "%" << std::endl;
    if(attendance<75.0){
        std::cout << "not allowed to sit in exam" << std::endl;
    }
    else std::cout << "allowed to sit in exam" << std::endl;
    return 0;
}
