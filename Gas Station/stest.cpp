#include<iostream>
using namespace std;

int main(){
	enum week
	{
		mon,tue,wen,thur,fri
	};
	int a = 1;
	if(a==mon)
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
	return 0;
}