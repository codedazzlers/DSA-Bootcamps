#include<iostream>
using namespace std;

int main(){
    int length,breath;
 
    cout << "Enter length:" << endl;
    cin >> length;

    cout << "Enter breath:" << endl;
    cin >> breath;
    
    // Check square or not
    if(length==breath){
    	cout << "This length and breath can form a Square !" <<endl;
    }
    else{
    	cout << "This cannot form a square !" <<endl;
    }
    
    return 0;
}