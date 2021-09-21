#include <iostream>
using namespace std;
int main2(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%400==0){
      cout<<"Leap Year";
    }
    else if(year%100==0){
        cout<<"Not Leap Year";
    }
    else if(year%4==0){
        cout<<"Leap Year";
    }
    else
    cout<<"Not Leap Year";
    return 0;
}