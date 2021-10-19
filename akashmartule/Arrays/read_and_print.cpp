#include <iostream>
#define MAX_SIZE 100 //Maximum size of the array
using namespace std;
 
int main()
{
    int arr[MAX_SIZE]; 
    int i,num;
    cout<<"Enter size of array:";
    cin>>num;
    cout<<"enter " <<num<<" elements in the array :";

    for(i=0; i<num; i++){
        cin>>arr[i];
    }
    cout<<"elements in the array are :";
    for(i=0;i<num;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
    