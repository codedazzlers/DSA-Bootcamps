#include<iostream>
using namespace std;
int getFib(int n)
{
    if(n==0 || n==1)
     return n;

     return  getFib(n-1) +  getFib(n-2);

}
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"Fibbonacci term of "<<n<<" is: "<<getFib(n);
}

