#include<iostream>
using namespace std;
int getFactorial(int n)
{
    if(n<=1)
     return 1;

   int answer=n*getFactorial(n-1);
   return answer;
}
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<"factorial of "<<n<<" is: "<<getFactorial(n)<<endl;
}
