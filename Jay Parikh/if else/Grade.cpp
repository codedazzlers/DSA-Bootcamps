#include <iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter the your marks \n";
    cin>>marks;
    if(marks<25){
        cout<<"F";
    }
    else if(marks<45 && marks>=25){
        cout<<"E";
    }
    else if(marks<50 && marks>=45){
        cout<<"D";
    }
    else if(marks<60 && marks>=50){
        cout<<"C";
    }
    else if(marks<80 && marks>=60){
        cout<<"B";
    }
    else if(marks>80){
        cout<<"A";
    }
    return 0;
}