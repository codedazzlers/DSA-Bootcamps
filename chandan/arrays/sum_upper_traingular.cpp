#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
   int sum=0;
    int row,col,upper;
    //inputs in 1st matrix
    cout<<"enter 1st matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>arr[row][col];

        }
    }

    
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(col>row){
                sum += arr[row][col];
               
            }
            }
        }
        cout<<"sum of upper traingular"<<sum<<endl;
        
        return 0;
    }

