#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, l, f, temp, swap, c = 0;
    cout<<"Enter any number:";
    cin>>n;
    temp = n;
    l = temp % 10;
    c = (int)log10(temp);
    //cout<<c;
    while(temp>=10)
    {
        temp /= 10;
    }
    f = temp;
    swap = (l* pow(10, c) + f) + (n - (f * pow(10, c) + l));
    cout<<"Last Digit: "<<l<<endl;
    cout<<"First Digit: "<<f<<endl;
    cout<<n<<" is swapped to "<<swap;
    return 0;
}

