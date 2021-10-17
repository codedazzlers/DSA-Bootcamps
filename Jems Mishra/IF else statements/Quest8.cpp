#include <iostream>
using namespace std;

int main()
{
    float Tclasses,Aclasses,attendence;

    cout<<"Enter the total number of classes:"<<endl;
    cin>>Tclasses;
    cout<<"Enter the number of classes attended:"<<endl;
    cin>>Aclasses;

    attendence=(Aclasses/Tclasses)*100;
    cout<<"Attendence: "<<attendence<<endl;

    if(attendence>=75)
    {
        cout<<"You are allowed to sit in the examination!"<<endl;
    }
    else if(attendence<75)
    {
        cout<<"You are not allowed to sit in the examination!"<<endl;
    }
 
    return 0;
}