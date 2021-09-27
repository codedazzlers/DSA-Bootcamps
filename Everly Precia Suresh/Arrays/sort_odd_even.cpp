#include <iostream>
using namespace std;
int main(){
   int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int ar[n],b[n];
    cout<<"Enter Elements: ";

    for(int i=0;i<n;i++){ //read
        cin>>ar[i];
    }
    cout<<"Array inputted successfully"<<endl;
     int even_count=0;
     int l=0;
    for(int i=0;i<n;i++){
        if(ar[i]%2==0){
          even_count++;
          b[l]=ar[i];
          l++;
        }
    }
    int temp;
 
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

        }
    }
    int k=even_count;
     for(int i=0;i<n;i++){
        if(ar[i]%2!=0){
          b[k]=ar[i];
          k++;
        }
    }
     k=even_count;
       for(int i=k;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(b[i]>b[j]){
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }

        }
    }
    for(int i=0;i<n;i++)
    cout<<b[i]<<" ";
  return 0;
}
