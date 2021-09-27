#include <iostream>
using namespace std;
int main(){
    int age;
    char gender;
    char martial_status;
    cout<<"Enter your age : ";
    cin>>age;
    cout<<"Enter your sex [M or F] : ";
    cin>>gender;
    cout<<"Enter your martial status [Y or N] : ";
    cin>>martial_status;
    if(gender=='F'){
        cout<<"Place of Service: Urban Areas";
    }
    else if(gender=='M'&& (age>=20 && age<=40)){
        cout<<"Place of Serivce: Anywhere";
    }
    else if(gender=='M'&& (age>=40 && age<=60)){
        cout<<"Place of Serivce: Urban Areas";
    }
    else if(age<20 || age>60){
      cout<<"ERROR";
    }
    else if(martial_status !='Y'|| martial_status!='N'){
        cout<<"Invalid Option";
    }
    else{
        cout<<"Invalid Option";
    }
    return 0;
}