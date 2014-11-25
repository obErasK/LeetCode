#include<iostream>
#include<string>
using namespace std;

string convert(string s, int nRows) {
	string zig = "";

	if (nRows <= 1 || s.length() == 0)  
           return s;

	for(int i = 0; i<nRows;i++){
		if(i==0||i==(nRows-1)){
			for(int j = i;j<s.length();){
				zig+=s[j];
				j+=((nRows-1)*2);
			}
		}
		else{
			for(int j = i;j<s.length();){
				zig+=s[j];
				j+=((nRows-i-1)*2);
				if(j<s.length()){
					zig+=s[j];
					j+=i*2;
				}
			}
		}		
	}
	return zig;
}



void main(){
	string s = "PAYPALISHIRINGFSDFAFGAGDAGFDGFHJUTYJUYKMUIKTRHRTH";
	cout<<s<<endl;
	string zig = convert(s,5);
	cout<<zig<<endl;
}