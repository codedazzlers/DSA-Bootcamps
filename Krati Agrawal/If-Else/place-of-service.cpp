#include<iostream>
using namespace std;

int main(){
    int age;
    char gender;
    char martial_status;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Enter your sex [M or F] : ";
    cin >> gender;
    cout << "Enter your martial status [Y or N] : ";
    cin >> martial_status;
    if(gender=='F'){
        cout<<"Your Place Of service Is : Urban Areas";
    }
    else if (gender == 'M' && (age >= 20 && age <= 40))
    {
        cout << "Your Place Of service Is : Anywher";
    }
    else if (gender == 'M' && (age > 40 && age <= 60))
    {
        cout << "Place of Serivce: Urban Areas";
    }
    else if (age < 20 || age > 60)
    {
        cout << "ERROR";
    }
    return 0;
}