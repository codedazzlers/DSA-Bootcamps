#include<iostream>
using namespace std;
int max(int array[],int n,int start){
	int maxi;
	
	if(start>=n-2){
		if(array[start]>array[start+1])
			return array[start];
		else
			return array[start+1];
	}
	
	
	maxi=max(array,n,start+1);
	
	if(array[start]>maxi)
		return array[start];
	else
		return maxi;   	
}

int min(int array[],int n,int start){
	int mini;
	
	if(start>=start-2){
		if(array[start]<array[start+1])
			return array[start];
		else
			return array[start+1];
	}
	mini=min(array,n,start+1);
	
	if(array[start]<mini)
		return array[start];
	else
		return mini;    	
}
int main(){
	int m;
	cout<<"Enter no. of elements in array::"<<endl;
	cin>>m;
	int ar[m];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<m;i++){
		cin>>ar[i];
	}
	int maximum=max(ar,m,0);
	cout<<"Maximum element in array will be::: "<<maximum<<endl;
	
	
	int minimum=min(ar,m,0);
	cout<<"Minimum element in array will be::: "<<minimum<<endl;
	
}
