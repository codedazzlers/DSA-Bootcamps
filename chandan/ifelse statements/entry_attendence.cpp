#include <iostream>

using namespace std;

int main()
{
    //question no 9
    cout<<"Hello World";
    int attend,held,medicalcase,total;
    cin>>attend>>held;
    cout<<"enter medical case in 1 or 0";
    cin>>medicalcase;
    total=(attend/held)*100;
    if(total>75){
        cout<<"get out of exam";
    
    }
    else if(total<75 && medicalcase){
        cout<<"cool in hall";
    }

    return 0;
}