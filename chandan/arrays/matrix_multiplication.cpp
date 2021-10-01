#include <iostream>
using namespace std;
int main(){
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int row,col;
    int sum;
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
           sum=0;
           for(int i=0;i<3;i++){
               sum += a[row][i] * b[i][col]; 
           }
           c[row][col] = sum;
            
        }
    }
//show product matrix
     cout<<"product matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cout<<c[row][col]<<"   ";
            
        }
        cout<<"   "<<endl;
    }
    return 0;
}