#include <iostream>
using namespace std;
int main() {
   float MH, ME, MP, MC, MM;
   float total;
   float percent;
   cout<<"Enter the marks of each subject out of 100"<<endl;
   cin>>MH>>ME>>MP>>MC>>MM;
   total = MH+ME+MP+MC+MM;
   percent = (total/500)*100;
   if(percent>80){
       cout<<"Grade A"<<endl;
   }
   else if ((percent<=80) && (percent>60)){
       cout<<"Grade B"<<endl;
   }
   else if ((percent<=60) && (percent>50)){
       cout<<"Grade C"<<endl;
   }
   else if ((percent<=50) && (percent>45)){
       cout<<"Grade D"<<endl;
   }
   else if ((percent<=45) && (percent>25)){
       cout<<"Grade E"<<endl;
   }
   else
   cout<<"Grade F"<<endl;
    return 0;
}
