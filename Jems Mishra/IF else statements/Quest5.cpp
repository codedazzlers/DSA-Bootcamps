#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout<<"Enter your marks:"<<endl;
    cin>>marks;

    if(marks<25)
    {
        cout<<"F"<<endl;
    }
    
    else if(marks<45 && marks>=25)
    {
        cout<<"D"<<endl;
    }
    else if(marks<50 && marks>=45)
    {
        cout<<"C"<<endl;
    }
    else if(marks<60 && marks>=50)
    {
        cout<<"B"<<endl;
    }
    else if(marks<80 && marks>=60)
    {
        cout<<"A"<<endl;
    }
    else if(marks>=80)
    {
        cout<<"A"<<endl;
    }

    
    return 0;
}