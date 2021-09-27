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
	int even_count=0;
	int odd_count=0;
	for(int j=0;j<n;j++){
		if(arr[j]%2==0)
			even_count=even_count+1;
		else if(arr[j]%2!=0)
			odd_count=odd_count+1;
	}
	cout<<"Even no. of elements in array::"<<even_count<<endl;
	cout<<"Odd no. of elements in array:::"<<odd_count<<endl;
}
