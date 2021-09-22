
#include <iostream>

using namespace std;

int main()
{
    int a1,a2,a3;
    cin>>a1>>a2>>a3;
    int oldest,youngest;
    if(a1>a2){
        if(a1>a3){
            oldest=a1;
            if(a3>a2) youngest=a2;
            else youngest=a3;
        }
        else{
            oldest=a3;
            youngest=a2;
        }
    }

    else{
        if(a2>a3){
            oldest=a2;
            if(a3>a1) youngest=a1;
            else youngest=a3;
        }
        else{
            oldest=a3;
            youngest=a1;
        }
    }
    cout << "oldest=" << oldest << endl;
    cout << "youngest=" << youngest << endl;

    return 0;
}

