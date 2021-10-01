#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"entre the marks:";
    cin>>m;
    if(m<25) cout<<"F";
    else if (m>=25 and m<45) cout<<"E";
    else if (m>=45 and m<50) cout<<"D";
    else if (m>=50 and m<60) cout<<"C";
    else if (m>=60 and m<80) cout<<"B";
    else if (m>=80) cout<<"A";
    return 0;
}