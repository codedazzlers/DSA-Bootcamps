#include<iostream>
#define max_size 50
using namespace std;

 int main()
 {
     int arr[max_size];
     int i,size,even,odd;
     
     cout<<"size of array"<<endl;
     cin>>size;

     for(i=0;i<size;i++){
         cin>>arr[i];
     }

     even=0;
     odd=0;
     for(i=0;i<size;i++){
         if(arr[i]%2==0){
             even++;
         }
         else{
             odd++;
         }


     }
     cout<<"count of even numbers:  "<<even<<endl;
     cout<<"count of odd numbers:  "<<odd<<endl;

     return 0;


 }
