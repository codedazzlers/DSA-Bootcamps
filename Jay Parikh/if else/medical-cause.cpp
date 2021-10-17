#include <iostream>
using namespace std;

int main(){
    float classesheld,classesattend;
    float percent;
    char c;
    cout<<"Enter the no of classes held first and then classes attend";
    cin>>classesheld>>classesattend;
    cout<<"Do u have medical issue or not? \nWrite 'Y' or 'N' for yes or no";
    cin>>c;
    percent=(classesattend/classesheld)*100;
    if(percent>=75 || c=='Y'){
        cout<<"Your percent is "<<percent<<"%";
        cout<<"\nYou are allowed to sit in the exam";
    }
    else{
        cout<<"Your percent is "<<percent<<"%";
        cout<<"\nYou are not allowed to sit in the exam";
    }
    return 0;
}