#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements in array::"<<endl;
	cin>>n;
	int array[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++){
		cin>>array[i];	
	}
	cout<<"The negative elements of array::"<<endl;
	for(int j=0;j<n;j++){
		if(array[j]<0)
		cout<<array[j]<<endl;
	}
	return 0;
}
