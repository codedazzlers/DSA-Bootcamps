#include <iostream>
using namespace std;

int main(){
    float classesheld,classesattend;
    float percent;
    cout<<"Enter the no of classes held first and then classes attend";
    cin>>classesheld>>classesattend;
    percent=(classesattend/classesheld)*100;
    if(percent>=75){
        cout<<"Your percent is"<<percent<<"%";
        cout<<"\nYou are allowed to sit in the exam";
    }
    else{
        cout<<"Your percent is"<<percent<<"%";
        cout<<"\nYou are not allowed to sit in the exam";
    }
    return 0;
}