#include <iostream>

using namespace std;

int main()
{
    int age;
    char sex,married;
    cout<<"Enter your age and sex(F or M)"<<endl;
    cin>>age>>sex>>married;
    if(sex=='F'){
        cout << "urban area" <<endl;
    }
    else if(sex=='M' && (age>20 && age<40)){
       cout << "anywhere" << endl;
    }
    else if(sex=='M' && (age>=40 && age<60)){
       cout << "urban area" <<endl;
    }
    else
{
cout << "Invalid credentials" << endl;
}
    return 0;
}
