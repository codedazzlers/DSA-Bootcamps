#include <iostream>
using namespace std;
int main()
{
    int age ;
    char gender,f,m;
    cout<<"gender: "<<endl;
    cin>>gender;
    cout<<"age: "<<endl;
    cin>>age;
    
    if (gender=='f')  
        cout<<"U can work only in urban area";
    else if (gender=='m')
    {   
        if (age>=20 & age<40) 
        cout<<"U can work from anywhere";
        else if (age>=40 & age<60) 
        cout<<"U can work in urban areas only";
        else
        cout<<"error";
    }
    else
        cout<<"error";

    return 0;
}
