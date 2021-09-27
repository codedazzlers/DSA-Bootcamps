#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout<<"Enter the no. of elements of array::"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int Extra_element;
	cout<<"Enter extra element you want to insert::"<<endl;
	cin>>Extra_element;
	arr[n]=Extra_element;
	cout<<"The new element in array::"<<endl;
	for(int j=0;j<n+1;j++){
		cout<<arr[j]<<" , ";
	}
	return 0;
}
