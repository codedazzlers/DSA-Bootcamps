#include <iostream>

using namespace std;

int main()
{
    double classes_held,classes_attended;
    cin>>classes_held>>classes_attended;
    
    double attendance=(classes_attended/classes_held)*100;
    cout << "attendance = " << attendance << "%" << endl;
    if(attendance<75.0){
        cout << "not allowed  in exam" << endl;
    }
    else 
	cout << "allowed  in exam" << endl;
    
}
