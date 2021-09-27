#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements in array::"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter elements of array::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int neg_count=0;
	for(int j=0;j<n;j++){
		if(arr[j]<0)
			neg_count+=1;
	}
	cout<<"No. of negative element in array::"<<neg_count<<endl;
}
