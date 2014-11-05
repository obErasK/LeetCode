#include<iostream>
#include<math.h>
using namespace std;

int reverse (int x){
	int count = 0;
	int num = x;
	while(num!=0){
		num/=10;
		count++;
	}
	int *p = new int[count];

	for(int i = 0;i<count;i++){
		p[i]=x%10;
		x/=10;
	}
	
	int rev = 0;
	for(int m=0;m<count;m++)
	rev += p[m]*pow((double)10,(double)count-m-1);
	return rev;
}

void main()
{
	for(int i = 0; i<5;i++){
		int x;
		cin>>x;
		cout<<reverse(x)<<endl;
	}
	//cout<<reverse(0)<<endl;
}