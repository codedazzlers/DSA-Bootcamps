#include <iostream>

using namespace std;

int main()
{
    double classes_held,classes_attended;
    char medical_cause;
    cout<<"Enter the number of classes held ,classes attended and if there was a medical cause or not(Y OR N)"<<endl;
    cin>>classes_held>>classes_attended>>medical_cause;
    double attendance=(classes_attended/classes_held)*100;
    cout << "attendance = " << attendance << "%" << std::endl;
    if(attendance<75.0){
        if(medical_cause=='Y') { cout << "allowed to sit in exam" << endl; }
        else {
                cout << "not allowed to sit in exam" << endl;
        }
    }
    else {
            cout << "allowed to sit in exam" << endl;
    }
    return 0;
}
