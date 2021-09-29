#include<iostream>
using namespace std;
int frequency(int arr[], int n, int f) {
   int count = 0;
   for(int i = 0; i<n; i++){
      if(arr[i] == f)
         count++;
   }
   return count;
}
int main () {
   int arr[] = {5, 12, 26, 5, 3, 4, 15, 5, 8, 4};
   int n = sizeof(arr)/sizeof(arr[0]);
   int e = 5;
   cout << "Frequency of " << e << " in the array is: " << frequency(arr, n, e);
}