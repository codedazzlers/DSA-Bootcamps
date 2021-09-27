#include <iostream>
using namespace std;
int main()
{
    float total_classes,attended;
    
    cout<<"Enter the number of classes held : ";
    cin>>total_classes;
    
    cout<<"Enter the number of classes attended : ";
    cin>>attended;
    
    float attendance=(attended/total_classes)*100;
    cout<<"Your attendance  is "<<attendance<<"%"<<endl;
    
    if(attendance>=75)
    {
        cout<<"You are permitted to write your exam";
    }
    else
    {
        cout<<"You are NOT permitted to write your exam";
    }
    return 0;
}