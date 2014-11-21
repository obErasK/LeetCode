#include<iostream>
using namespace std;

bool isPalindrome(int x) {
	if(x<0) return false;
        int temp = x;
		int num = 0;
		int sum = 0;
		while(temp!=0){
			num=temp%10;
			sum=sum*10+num;
			temp/=10;
		}
		return x==sum;
    }

void main(){
	int x;
	cin>>x;
	if (isPalindrome(x))
		cout<<"yes"<<endl;
	else
		cout<<"no"<<endl;
}