/* problem statement
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
*/

#include <iostream>
using namespace std;

int main(){

float classes_held,classes_attended;
double attendance;



cout<<"Enter total no of classes held and classes attended"<<endl;
cin>>classes_held>>classes_attended;

attendance=((classes_attended/classes_held))*100;
cout<<"percentage of class attended is " <<attendance<< "% \n" <<endl;

if(attendance>75.0){
    cout << "allowed to appear for exam";
    }
else if (attendance<75.0){
    char ans;
    cout<<"Do you have medical cause Y or N: ";
    cin>>ans;
    if (ans=='Y')
    {
        cout<<"\n allowed to appear  for exam";
    }
        else if(ans=='N')
        cout<<"\n not allowed to appear for exam"<<endl;
}

return 0;
}
