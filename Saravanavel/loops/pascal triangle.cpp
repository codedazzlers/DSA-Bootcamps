/*problem description
  program to print pascal triangle*/



/* Pascal Triangle
Pascal triangle is a triangular number pattern named after famous
 mathematician Blaise Pascal.
 */
#include<iostream>
using namespace std;
long int fact(int);
int main()
{
    int i, c, rowSize;
    cout<<"Enter the Number of Rows: ";
    cin>>rowSize;
    for(i=0; i<rowSize; i++)
    {
        for(c=(rowSize-1); c>i; c--)
            cout<<" ";
        for(c=0; c<=i; c++)
            cout<<fact(i)/(fact(c)*fact(i-c))<<" ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
long int fact(int n)
{
    int i, factRes=1;
    for(i=1; i<=n; i++)
        factRes = factRes*i;
    return factRes;
}
