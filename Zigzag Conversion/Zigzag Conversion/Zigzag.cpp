#include<iostream>
#include<string>
using namespace std;

string convert(string s, int nRows) {
	string zig = "";
	for(int i = 0;i<nRows;i++){
		for(int j = i; j<s.length();){
			zig+= s[j];
			if(i%2==0)
				j+=(nRows+nRows/2);
			else
				j+=((nRows+nRows/2)/2);
		}
	}
	return zig;
}

void main(){
	string s = "PAYPALISHIRING";
	string zig = convert(s,4);
	cout<<s<<endl;
	cout<<zig<<endl;
}