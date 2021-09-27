#include<iostream>
#define MAX_SIZE 100
using namespace std;
int sum(int array[],int n,int start){
	if(start>=n)
	return 0;
	
	return (array[start]+sum(array,n,start+1));
}
int main(){
	int m;
	cout<<"Enter the no. of elements of array::"<<endl;
	cin>>m;
	int ar[MAX_SIZE];
	cout<<"Enter the elements of array::"<<endl;
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	int addition=sum(ar,m,0);
	cout<<"Sum of all array elements is:::"<<addition<<endl;
}
