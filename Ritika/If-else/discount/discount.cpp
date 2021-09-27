#include<iostream>
using namespace std;
int main()
{
    int quantity;
    cout<<"Enter the quantity of the goods purchased:"<<endl;
    cin>>quantity;
if((quantity*100)>1000)
{

    cout<<"You get a discount of "<<(.1*quantity*100)<<" and your total cost is" << ((quantity*100)-(.1*quantity*100))<<endl;
}
else
{
  cout<<"No discount"<<endl;
}
return 0;
}
