#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Please Enter your marks: ";
    cin>>mark;
    if(mark>=80 && mark<=100)
    {
        cout<<"Your Grade is A"<<endl;
    }
    else if(mark>=60 && mark<80)
    {
        cout<<"Your Grade is B"<<endl;
    }
     else if(mark>=50 && mark<60)
     {
        cout<<"Your Grade is C"<<endl;
    }
     else if(mark>=45 && mark<50)
     {
        cout<<"Your Grade is D"<<endl;
    }
     else if(mark>=25 && mark<45)
     {
        cout<<"Your Grade is E"<<endl;
    }
    else if(mark<25)
    {
         cout<<"Your Grade is F"<<endl;
    }
    else
    {
        cout<<"Please enter Your Marks between 0 to 100"<<endl;
    }
    
    return 0;
}

