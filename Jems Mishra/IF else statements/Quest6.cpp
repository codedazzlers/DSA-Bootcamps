#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
        cout<<"Age of a:"<<endl;
        cin>>a;
        cout<<"Age of b:"<<endl;
        cin>>b;
        cout<<"Age of c:"<<endl;
        cin>>c;

        if(a>b && a>c)
        {
            cout<<"a is oldest"<<endl;
        }
        else if(b>c && b>a)
        {
            cout<<"b is oldest"<<endl;
        }
        else if(c>a && c>b)
        {
            cout<<"c is oldest"<<endl;
        }
        
        
        if(b<c && b<a)
        {
            cout<<"b is youngest"<<endl;
        }
         else if(a<c && a<b)
        {
            cout<<"a is youngest"<<endl;
        } else if(c<b && c<a)
        {
            cout<<"c is youngest"<<endl;
        }
        

        return 0;
}