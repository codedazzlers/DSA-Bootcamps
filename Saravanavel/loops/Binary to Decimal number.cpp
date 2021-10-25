/*problem statement
  program to convert Binary to Decimal number system */

#include <iostream>
using namespace std;

int main()
{
    int binary, decimal = 0, base = 1, remainder, temp;

    cout<<"Enter the Binary Number = ";
    cin>>binary;

   for(temp = binary; temp > 0; temp = temp / 10)
    {
        remainder = temp % 10;
        decimal = decimal + remainder * base;
        base = base * 2;
    }

    cout<<"The Binary Value  = "<<binary<<endl;
    cout<<"The Decimal Value = "<<decimal<<endl;

    return 0;
}
