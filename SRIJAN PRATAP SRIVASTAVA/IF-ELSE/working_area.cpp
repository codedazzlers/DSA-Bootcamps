#include<iostream>
using namespace std;
int main()
{
    int age;
    char gender;
    char martial_status;
    cout<<"Enter age , gender and maritial status:";
    cin>>age>>gender>>martial_status;
    if(gender=='F') cout<<"WORK IN URBAN AREAS";
    else if (gender=='M' and age>=20 and age<40)
    cout<<"WORK ANYWHERE";
    else if (gender=='M' and age>=40 and age<60)
    cout<<"WORK IN URBAN AREAS";
    else 
    cout<<"ERROR";
    return 0;
}