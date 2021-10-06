#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements= ";
    cin>>n;
    int ar[n];
    cout<<"Enter elements= ";
    for(int i=0; i<n;i++){
        cin>>ar[i];
    }
    int counteven = 0, countodd = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]%2==0){
            counteven++;    //same as counteven = counteven+1
        }
        else{
            countodd++;     //same as countodd = countodd+1
        }
    }
    cout<<"Total even elements in array= "<< counteven <<endl;
    cout << "Total odd elements in array= " << countodd << endl;

    return 0;
}