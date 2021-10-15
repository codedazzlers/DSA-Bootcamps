/* problem statement
A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
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
    cout << "Allowed to appear for exam";
    }
else if (attendance<75.0){
    cout<<"Not allowed to appear for exam"<<endl;
}

return 0;
}
