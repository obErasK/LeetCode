#include <string>
#include <iostream>
#include<sstream>
using namespace std;
int main()
{
	//һ��ʼ����Ϊ��ʼ��Ҳ��n������д�ĳ����Ǹ��鷳һЩ��n��nth��
    int n = 5;
	/*
	stringstream temp;
	temp<<n;
	string str1 = temp.str();
	*/
	//ֻ��Ҫ�޸�str�㶨Ϊ1�Ϳ���
	string str1 = "1";
	for(int i = 1;i<n;i++){
		string str2;
		for(int j =0; j<str1.length();){
			int count = 1;
			if(j!=str1.length()-1){
				while(str1[j]==str1[j+1]){
					count++;
					j++;
					if(j==str1.length()-1)
						break;
				}
			}
			stringstream c;
			c<<count;
			string str3 = c.str();
			str2=str2+str3;
			str2=str2+str1[j];
			j++;
		}
		str1=str2;
	}
	cout<<str1<<endl;
		
    return 0;
}

/* Accepted
class Solution {
public:
    string countAndSay(int n) {
        
    	string str1 = "1";
    	for(int i = 1;i<n;i++){
    		string str2;
    		for(int j =0; j<str1.length();){
    			int count = 1;
    			if(j!=str1.length()-1){
    				while(str1[j]==str1[j+1]){
    					count++;
    					j++;
    					if(j==str1.length()-1)
    						break;
    				}
    			}
    			stringstream c;
    			c<<count;
    			string str3 = c.str();
    			str2=str2+str3;
    			str2=str2+str1[j];
    			j++;
    		}
    		str1=str2;
    	}
    	return str1;
    }
};
*/