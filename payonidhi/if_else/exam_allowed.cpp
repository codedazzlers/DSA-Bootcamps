#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int cls_held, cls_attnd;
    float percent;
    cout<<"Enter the number if classes held and classes attended by the student"<<endl;
    cin>>cls_held>>cls_attnd;
    percent = (cls_attnd*100)/cls_held;
    if(percent<75){
        cout<<"You are not allowed to sit in exam";
    }
    else{
        cout<<"You are alllowed to sit in exam!";
    }
    return 0;
}
