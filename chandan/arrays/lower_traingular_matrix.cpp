#include <iostream>
using namespace std;
int main(){
    int arr[3][3];
   int sum=0;
    int row,col,lower;
    //inputs in 1st matrix
    cout<<"enter 1st matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>arr[row][col];

        }
    }

    lower=1;


     
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            if(col>row && arr[row][col!=0]){
                lower=0;
            }
            }
        }
        if(lower==1){
            cout<<"matrix is upper traingular"<<endl;
            for(row=0;row<3;row++){
                for(col=0;col<3;col++){
                    cout<<arr[row][col]<<"    ";
                }
                cout<<"    ";
            }
            
        }
        else{
            cout<<"not traingular"<<endl;
        }
        return 0;
    }

