#include <iostream>
using namespace std;
int main(){int a[3][3];
   int sum=0;
    int row,col;
    //inputs in 1st matrix
    cout<<"enter 1st matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            cin>>a[row][col];

        }
    }

    
//sum of row ,column  matrix array
     cout<<"row matrix"<<endl;
    for(row=0;row<3;row++){
        sum=0;
        for(col=0;col<3;col++){
            sum=sum + a[row][col];

        }
    }
        cout<<"sum of diagonal matrix"<<sum<<endl;
    
    cout<<"column  matrix"<<endl;
    for(row=0;row<3;row++){
        for(col=0;col<3;col++){
            sum=sum + a[col][row];
            

        }
        
        }
        cout<<"sum of diagonal matrix"<<sum<<endl;
    
    
    return 0;
}