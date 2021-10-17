#include<iostream>
using namespace std;
int main(){
	int u,r,tot;
	cout<<"\nEnter no.of Units : ";
	cin>>u;
	if((u*100)>1000){
		r=0.1*u*100;
		tot=u*100-r;
		cout<<"Total cost = "<<tot<<" with a discount of "<<r;
	}
	else
	{
		tot=u*100;
		cout<<"Total cost = "<<tot<<" with 0 discount ";
	}
}
