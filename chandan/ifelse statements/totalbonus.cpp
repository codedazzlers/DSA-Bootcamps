#include <iostream>

using namespace std;

int main()
{
    //question no.4
    cout<<"Hello World";
    int salary,yearsofser,totbonus;
    
    cin>>salary>>yearsofser;
    
    if(yearsofser>5){
        
        cout<<"get 5% bonus";
        
        totbonus=0.05*salary;
        
        cout<<totbonus;
        
    }

    return 0;
}