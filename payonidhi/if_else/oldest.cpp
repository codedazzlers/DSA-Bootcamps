#include <iostream>
using namespace std;
int main() {
    int age_1, age_2, age_3;
    cout<<"Enter the ages of three persons"<<endl;
    cin>>age_1>>age_2>>age_3;
    if(age_1>age_2){
        if(age_1>age_3){
            cout<<"First person is oldest"<<endl;
        }
        else
        cout<<"Third person is the oldest"<<endl;
    }
    else if (age_2>age_1){
        if(age_2>age_3){
            cout<<"Second person is the oldest"<<endl;
        }
        else
        cout<<"Third person is the oldest"<<endl;
    }
    return 0;
}
