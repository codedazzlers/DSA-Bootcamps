
// /* C++ Program to find sum of elements
// in a given array */
// #include <bits/stdc++.h>
// using namespace std;
 
// // function to return sum of elements
// // in an array of size n
// int sum(int arr[], int n)
// {
//     int sum = 0; // initialize sum
 
//     // Iterate through all elements
//     // and add them to sum
//     for (int i = 0; i < n; i++)
//     sum += arr[i];
 
//     return sum;
// }
 
// // Driver code
// int main()
// {
//     int arr[] = {12, 3, 4, 15};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Sum of given array is " << sum(arr, n);
//     return 0;
// }

#include<iostream>
#define MAX_SIZE 20
using namespace std;

int main(){

 int arr[MAX_SIZE];
 int i,n,sum;

 cout<<"Enter the number of elements"<<" ";
  cin>>n;

  cout<<"Enter the array elements"<<endl;
  for( i=0;i<n;i++){
      cin>>arr[i];
  }
  cout<<"array is:"<<endl;
  for( i=0;i<n;i++){
      cout<<arr[i];
  }
  for( i=0;i<n;i++){
      sum=sum+arr[i];
  }
 
 cout<<"Sum of elements in array is:"<<sum<<endl;
  return 0;

}



