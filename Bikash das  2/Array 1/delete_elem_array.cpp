#include<iostream>
#define MAX_SIZE 100
using namespace std;
int main(){
	int n;
	cout <<"Enter the no. of elements in array::"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter the elements in array::"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int place;
	cout<<"Enter the place you want to delete that place's element::"<<endl;
	cin>>place;
	int pl=place;
	for(int j=1;j<(n-place);j++){
		arr[pl]=arr[place+j];
		pl+=1;
	}
	cout<<"Now the new array will be:::"<<endl;
	for(int k=0;k<n-1;k++){
		cout<<arr[k]<<" , ";
	}
	return 0;
}
