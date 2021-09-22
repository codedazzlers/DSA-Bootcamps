#include <iostream>

using namespace std;

int main()
{
    int t;
    double salary,bonus=0.0;
    cin>>t;
    if(t>5){
        cin>>salary;
        bonus=0.05*salary;
        cout << bonus << endl;
    }
    else
    cout << bonus << endl;
    return 0;
}
