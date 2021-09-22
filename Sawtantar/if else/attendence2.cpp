
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
        cout <<endl<<"You are permitted to write your exam";
    }
    else if(attendance<75)
    {
         cout<<"If medical ill to attend class(Y/N) : ";
         char medical;
         cin>>medical;
    if(medical=='Y'||medical=='y')
        cout<<endl<<"You are permitted to write your exam";
        else
        {
            cout << "Not Permitted";
        }
    }

  
    return 0;
}