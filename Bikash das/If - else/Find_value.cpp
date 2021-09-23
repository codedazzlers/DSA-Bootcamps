//FIND VALUE OF GIVEN NUMBER
#include<iostream>
#include<string>
using namespace std;
int t_f(int num){
	if(num==1)
	cout << "True"<<endl;
	else if(num==0)
	cout << "False"<<endl;
	else
	cout << "NOT DEFINE"<<endl;
}
int main(){
	int x=2;
	int y=5;
	int z=0;
	int a=bool(x==2);
	t_f(a);
	int b=bool(x!=5);
	t_f(b);
	int c=bool(x!=5 && y>=5);
	t_f(c);
	int d=bool(z!=0 || x==2);
	t_f(d);
	int e=bool(!(y<10));
	t_f(e);
	
	
}
