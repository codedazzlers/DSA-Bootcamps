#include<iostream>
#include<limits>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elemts in array:::"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements of array:::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max1=INT_MIN;
	int max2=INT_MIN;
	for(int j=0;j<n;j++){
		if(arr[j]>max1){
			max2=max1;
			max1=arr[j];
		}
		else if(arr[j]>max2 && arr[j]<max1){
			max2=arr[j];
		}
	}
	cout<<"Second largest element in array is::: "<<max2<<endl;
}
