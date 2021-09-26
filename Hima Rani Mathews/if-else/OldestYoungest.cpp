#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"\nEnter ages of three people : ";
	cin>>a>>b>>c;
	int old=(a>b)?(a>c)?a:c:(b>c)?b:c;
	int young=(a<b)?(a<c)?a:c:(b<c)?b:c;
	cout<<"Oldest of Age : "<<old<<"\nYoungest of Age : "<<young;
}
