#include <iostream>
using namespace std;

int main()
{
    int quantity,units,Tcost;
   

    cout<< "Quantity purchased:"<<endl;
    cin>>quantity;

    Tcost=quantity*100;

    if(Tcost>=1000)
    {
      
        cout<<"Total Cost is:"<< Tcost-(Tcost*.1) << endl;
    }
    else
    {
        cout<<"Purchase worth 1000!!"<<endl;
    }

    return 0;
}