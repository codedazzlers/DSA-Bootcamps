#include<iostream>
using namespace std;

int main()
{
int quantity;
int cost;
cin>>quantity;
if (quantity*100>1000)
{
     cost=(quantity-(quantity*10)/100)*100;

}
else
{
    cost=quantity*100;
}

cout<<cost;

return 0;
}