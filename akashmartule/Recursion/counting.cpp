#include<iostream>
using namespace std;

    void getCounting(int n)
    {
        // Base condition
        if(n<=0)
         return ;

         getCounting(n-1);
           
           cout<<n;
    }

    int main()
    {
        int n;
        cout<<"please Enter number: "<<endl;
        cin>>n;

        cout<<"counting"<<endl;
        getCounting(n);


    }
