#include <iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int row,col;
    //inputs in 1st matrix
    cout<<"enter 1st matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>a[row][col];

        }
    }

    //inpute in 2nd matrix
    cout<<"enter 2nd matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>b[row][col];
            
        }
    }

     
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            c[row][col]=a[row][col] - b[row][col];
            
        }
    }
//show addition array
     cout<<"addition matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cout<<c[row][col]<<"   ";
            
        }
        cout<<"   "<<endl;
    }
    return 0;
}