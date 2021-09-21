#include <iostream>

using namespace std;

int main()
{
    double marks,grade;
    char A,B,C,D,E,F;
    cout << "Enter your marks: ";
    cin>> marks ;
    if(marks > 80){
        grade=A;
        cout << "  yey you got A!";
    }
    else if(marks>=60 && marks<=80 ){
        grade=B;
        cout << "  yey you got B!";
    }
    else if(marks>=50 && marks<=60){
        grade=C;
        cout <<  "  yey you got C!";
    }
    else if(marks>45 && marks<50){
        grade=D;
        cout <<  "   you got D!";
    }
    else if(marks>25&&marks<45){
        grade=E;
        cout << "   you got E!";
    }
    else if(marks<25){
        grade=F;
        cout << "you got F!";
    }
    else{
        cout << "Incorrect number";
    }
}