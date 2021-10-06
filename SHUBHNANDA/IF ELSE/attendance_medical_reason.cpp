#include <iostream>
using namespace std;
int main()
{
    double classes_held,classes_attended;
    char medical_cause;
    cin>>classes_held>>classes_attended>>medical_cause;
    double attendance=(classes_attended/classes_held)*100;
    cout << "attendance = " << attendance << "%" <<endl;
    if(attendance<75.0){
        if(medical_cause=='Y')
		 cout << "allowed to sit in exam" << endl;
        else cout << "not allowed to sit in exam" << endl;
    }
    else cout << "allowed to sit in exam" << endl;
    return 0;
}
