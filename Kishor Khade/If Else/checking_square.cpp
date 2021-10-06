//Take values of length and breadth of a rectangle from user and check if it is square or not.
#include<iostream>
using namespace std;

int main(){
	int length,breadth;
	cout<<"Length : ";
	cin>>length;
	cout<<"Breadth : ";
	cin>>breadth;
	if (length==breadth)
	cout<<"It is a Square.";
	else
	cout<<"It is not a Square.";
	return 0;
}
