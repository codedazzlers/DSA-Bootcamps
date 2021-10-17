/* problem statement
Take values of length and breadth of a rectangle from user and check if it is square or not.*/


#include<iostream>

using namespace std;

int main(){

int length,breadth;

cout<<"enter length and breadth"<<endl;

cin>>length>>breadth;

if(length== breadth){

    cout<<"it is square"<<endl;
}

else
    cout<<"not square"<<endl;

return 0;
}

