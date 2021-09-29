#include <iostream>
using namespace std;

int main(){
    int x,y,z;
    x = 2;
    y = 5;
    z = 0;
    cout<<"value of (x==2) is "<<(x==2)<<"\n";
    cout<<"value of (x!=5) is "<<(x!=5)<<"\n";
    cout<<"value of (x!=5 && y>=5) is "<<(x!=5 && y>=5)<<"\n";
    cout<<"value of (z != 0 || x == 2) is "<<(z != 0 || x == 2)<<"\n";
    cout<<"value of !(y < 10) is "<<(!(y < 10))<<"\n";
    return 0;
}