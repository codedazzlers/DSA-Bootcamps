#include <iostream>

using namespace std;

int main()
{
    double year,salary,amount=0;
    cout << "Numbers of years : ";
    cin >> year ;
    cout << "Enter salary: ";
    cin >> salary ;
    if(year > 5){
        amount=salary*0.05;
        cout << amount << " bonus... yey you got bonus!";
        
    }

    else{
        amount= salary;
        cout << amount << " no bonus";
    }
}
