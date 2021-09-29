#include<iostream>
using namespace std;

int main()
{
int first_side,second_side,third_side,fourth_side;
cin>>first_side>>second_side>>third_side>>fourth_side;
if (first_side==third_side&&second_side==fourth_side)
{
    cout<<"it is rectangle";
}
else
{
    cout<<"it is not a rectangle";
}


return 0;
}