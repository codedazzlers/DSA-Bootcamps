#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements in array:::"<<endl;
	cin>>n;
	int arr1[n];
	cout<<"Enter the elements in first array:::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	int arr2[n];
	cout<<"The elements in second array::: "<<endl;
	for(int j=0;j<n;j++){
		arr2[j]=arr1[j];
		cout<<arr2[j]<<" , "<<endl;
	}
	return 0;
}
