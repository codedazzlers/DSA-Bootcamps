#include <iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter a year"<<endl;
    cin>>year;
    if(year%400==0){
        cout << "leap year" <<endl;
    }
    else if(year%100==0){
        cout << "non-leap year" << endl;
    }
    else if(year%4==0){
        cout << "leap year" << endl;
    }
    else{
       cout << "non-leap year" <<endl;
    }
    return 0;
}
