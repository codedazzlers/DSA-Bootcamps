#include <iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int row,col;
    int num;
    cout<<"enter value"<<endl;
    cin>>num;
    //inputs in 1st matrix
    cout<<"enter 1st matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>a[row][col];

        }
    }

    
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            a[row][col] =num*a[row][col];
            
        }
    }

     
  
//show scalar array
     cout<<"scalar matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cout<<a[row][col]<<"   ";
            
        }
        cout<<"   "<<endl;
    }
    return 0;
}