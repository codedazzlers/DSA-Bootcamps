#include <iostream>
using namespace std;

int main(){
    int age;
    char sex,maritalstatus;
    cout<<"Enter your age";
    cin>>age;
    cout<<"Enter your sex ( M or F ) \n";
    cin>>sex;
    cout<<"Enter your marital status ( Y or N )\n";
    cin>>maritalstatus;
    if(sex=='F'){
        cout<<"U will work only in urban areas\n";
    }
    else if(sex=='M'){
        if(age>20 && age<40){
            cout<<"U may work in anywhere\n";
        }
        else if(age>40 && age<60){
            cout<<"U will work in urban areas only.\n";
        }
        else{
            cout<<"ERROR";
        }
    }

    return 0;
}