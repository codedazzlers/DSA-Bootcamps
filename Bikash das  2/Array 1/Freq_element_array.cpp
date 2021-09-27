#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout <<"Enter the no. of elements in array::"<<endl;
	cin>>n;
	int arr[n];
	int fre[n];
	cout<<"Enter the elements in array::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		fre[i]=-1;
	}
	
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=i+1;j<n;j++){
			if(arr[i]=arr[j]){
				count=count+1;
				fre[j]=0;
			}
		}
		if(fre[i]!=0)
			fre[i]=count;		
	}
	cout<<"The frequencies of array::"<<endl;
	for(int i=0;i<n;i++){
		if(fre[i]!=0)
			cout<<"Frequency of "<<arr[i]<<" is "<<fre[i]<<endl;
	}
}
