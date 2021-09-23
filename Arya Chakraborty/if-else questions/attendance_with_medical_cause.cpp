#include <iostream>

using namespace std;

int main()
{
    double classes_held,classes_attended;
    char medical_cause;
    cin>>classes_held>>classes_attended>>medical_cause;
    double attendance=(classes_attended/classes_held)*100;
    std::cout << "attendance = " << attendance << "%" << std::endl;
    if(attendance<75.0){
        if(medical_cause=='Y') std::cout << "allowed to sit in exam" << std::endl;
        else std::cout << "not allowed to sit in exam" << std::endl;
    }
    else std::cout << "allowed to sit in exam" << std::endl;
    return 0;
}
