#include <iostream>

using namespace std;

int main()
{
    double A,B,C,Age;
    
    cin>> A>> B>> C ;
    if(A > B && A>C  ){
       
        cout << "  Oldest is A :" << A;
        if(B<C){
            cout <<" Youngest is B: "  << B;
        }
        else
            cout <<" Youngest is C: "  <<C ;
    }
    if(B> C && B>A  ){
        
       cout << "  Oldest is B :" << B;
        if(A<C){
            cout <<" Youngest is A: "  << A;
        }
        else
            cout <<" Youngest is C: "  <<C ;
    }
    
    if(C > B && C>A  ){
       
       cout << "  Oldest is C:" << C;
        if(B<A){
            cout <<" Youngest is B: "  << B;
        }
        else
            cout <<" Youngest is A: "  <<A ;
    }
    if(A==B && B==C){
        cout << " Same age of all";
    }
}
