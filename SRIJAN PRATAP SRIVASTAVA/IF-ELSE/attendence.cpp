#include<iostream>
using namespace std;
int main()
{
    int hld_cls;
    int atnd_cls;
    float percent;
    cout<<"enter the total held and attended classes:";
    cin>>hld_cls>>atnd_cls;
    percent=((float)atnd_cls/hld_cls)*100;
    cout<<"percentage of class attended:"<<percent<<endl;
    if (percent>75)
    {
        cout<<"allowed ";
    }
    else if (percent<=75)
    {
        char ans;
        cout<<"Do you have medical cause:";
        cin>>ans;
        if (ans=='Y')
        {
            cout<<"allowed";
        }
        else if(ans=='N')
        cout<<"not allowed";
    }
    ;
    
    return 0;
}