#include <iostream>

using namespace std;

int main()
{
    //question no .5
    cout<<"Hello World";
    int grade;
    cin>>grade;
    if(grade<25){
        cout<<"F";
        
    }
    else if ((grade>=25)&&(grade<45)){
        cout<<"E";
    }
    else if ((grade>=45)&&(grade<50)){
        cout<<"D";
    }
    else if ((grade>=50)&&(grade<60)){
        cout<<"C";
    }
    else if ((grade>=60)&&(grade<80)){
        cout<<"B";
    }
    else if ((grade>=80)&&(grade<100)){
        cout<<"A";
    }

    return 0;
}