#include <iostream>

using namespace std;

int main()
{
    
    //question no 8
    cout<<"Hello World";
    int attend,held,total;
    cin>>attend>>held;
    total=(attend/held)*100;
    if(total>75){
        cout<<"get out of exam";
    
    }
    else{
        cout<<"cool in hall";
    }

    return 0;
}
