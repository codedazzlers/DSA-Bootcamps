#include<iostream>
using namespace std;

int main(){
    int i, num1,num2,max,lcm=1;
    cout << "Enter first number= ";
    cin >> num1;
    cout << "Enter second number= ";
    cin >> num2;
    max= (num1>num2)?num1:num2; 
    i=max;
    while(1) // while(1) is an infinite loop which runs until lcm is found.
    {
        if(i%num1==0 && i%num2==0){ //if i divides both num1 and num2 then i is lcm.
            lcm =i;

            break;
        }
        i=i+max;
    
    }
    cout<<"LCM of "<<num1<<" and "<<num2<<" is= "<<lcm<<endl;
    return 0;
}