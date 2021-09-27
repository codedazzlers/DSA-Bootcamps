#include<iostream>
#define MAX_SIZE 100
using namespace std;

int aray(int array[],int n,int start){
	if(start<n){
	cout<<array[start]<<endl;
	return aray(array,n,start+1);
}
}
int main(){
	int m;
	cout <<"Enter the no. of elements in array"<<endl;
	cin >>m;
	int ar[MAX_SIZE];
	cout<<"Enter the elements of array::"<<endl;
	for(int i=0;i<m;i++){
		cin >>ar[i];
	}
	cout<<"The elements of array will be:::"<<endl;
	aray(ar,m,0);
}
