#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    
    cout<<"Enter Person 1's age: ";
    cin>>a;
    cout <<endl <<"Enter Person 2's age: ";
    cin>>b;
    cout  <<endl <<"Enter Person 3's age: ";
    cin>>c;
    if(a>b && a>c )
    {
     cout << endl  << "Person 1 is oldest of all";
    }
    else if(b>a && b>c)
    {
        cout << endl << "Person 2 is oldest of all";
    }
    else
    {
       cout << endl << "Person 3 is oldest of all";
    }



    return 0;
}