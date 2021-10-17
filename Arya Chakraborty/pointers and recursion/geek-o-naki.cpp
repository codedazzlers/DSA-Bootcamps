//https://practice.geeksforgeeks.org/problems/geek-onacci-number/0/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&difficulty[]=0&page=1&query=category[]Recursiondifficulty[]-1difficulty[]0page1category[]Recursion#

//time complexity=O(3^n)

#include <iostream>
using namespace std;
int geekNo(int a,int b,int c,int n)
{
   int ans=a+b+c;
   a=b;
   b=c;
   c=ans;
   if(n<=4)return ans;
   else geekNo(a,b,c,n-1);
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,n;
	    cin>>a>>b>>c>>n;
	    cout<<geekNo(a,b,c,n)<<endl;
	}
	return 0;
}