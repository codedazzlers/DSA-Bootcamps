#include <iostream>

using namespace std;

int main()
{
   double classes_held,classes_attended;
   cout<<"Enter the number of classes held and classes attended"<<endl;
    cin>>classes_held>>classes_attended;
    double attendance=(classes_attended/classes_held)*100;
    cout << "attendance = " << attendance << "%" << endl;
    if(attendance<75.0){
        cout << "not allowed to sit in exam" << endl;
    }
    else {
            cout << "allowed to sit in exam" << endl;
    }
    return 0;
}
