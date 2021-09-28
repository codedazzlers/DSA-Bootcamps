#include<iostream>
using namespace std;


int main()
{
	float noc ; //noc = no. of classes held
	float noca;  //noc = no. of classes attended
	float poc; //percentage of classes attendance
	cout <<"no. of classes held:";
	cin>> noc;
	cout<<"no. of classes attended:";
	cin>> noca;
    
    poc = (noca/noc)*100;
    cout<<"percentage of classes attended :"<<poc;
  
    
	if(poc>75)
		cout<<"\nStudent is allowed to sit in exam ";
	else
		cout<<"\nStudent is not allowed to sit in exam ";


	return 0;
}
