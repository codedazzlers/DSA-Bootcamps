#include<iostream>
using namespace std;

int main(){
    int length,breath;
    //Enter length
    cout << "Enter length:" << endl;
    cin >> length;
    //Enter breath
    cout << "Enter breath:" << endl;
    cin >> breath;
    
    //square or not
    if(length==breath){
    	cout << "This length and breath can from a Square:::" <<endl;
    }
    else{
    	cout << "This cannot form a square:::" <<endl;
    }
    
    return 0;
}
