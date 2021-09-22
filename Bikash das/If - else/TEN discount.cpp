#include<iostream>
using namespace std;

int main(){
    int b,totalb;
    //Enter the quatity of things you purchased ,suppose one quantity charge 100 rs.
    cout << "Enter the quantity of things" <<endl;
    cin >> b;
    //total amount you purchase
    totalb=b*100;
    if(totalb>1000){
    	int tendis=(10*totalb)/100;
    	int disconb=totalb-tendis;
    	cout << "CONGRATULAION,	you got 10% discount!!!" <<  "Now you have to pay " << disconb << "from" << totalb <<endl; 
	}
    else{
    	cout << "SORRY,you dont get eny discount!!" <<  "Now you have to pay" << totalb <<endl;
	}
    
    return 0;
}
