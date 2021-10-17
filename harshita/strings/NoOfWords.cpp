#include<iostream>
using namespace std;

int main()
{
    string str;
    cout<< "Enter a sentence : ";
    getline(cin,str);
    int words=0;
    for(int i=0; str[i]!=0;i++){
        if(str[i]==' '){
            words++;
        }
    }
    cout<<"No of words: "<< words+1 ;
return 0;
}
