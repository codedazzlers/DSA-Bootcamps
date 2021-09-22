// AN employee can work or not 
#include<iostream>
using namespace std;
int main(){
	int age;
	char sex;
	char maritial_status;
	//Enter age of worker
	cout <<"Enter age of worker::"<<endl;
	cin >>age;
	//Enter SEX of worker
	cout <<"Enter SEX of worker:::(IF MALE ENTER m or if female f)"<<endl;
	cin>> sex;
	//Enter martial status
	cout <<"What is maritial status of worker?(if YES enter 'y' or if NO enter 'n'" << endl;
	cin >>maritial_status;
	if('sex is f')
	cout <<"This worker can only work in urban areas"<<endl;
	else if('sex is m' && 20<=age<40)
	cout <<"HE may work in anywhere" <<endl;
	else if('sex is m' && 40<=age<=60)
	cout << "He will work only in urban areas"<<endl;
	else
	cout <<"ERROR!!!!!!"<<endl;
}
