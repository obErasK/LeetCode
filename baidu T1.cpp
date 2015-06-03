//baidu T3

#include<iostream>
#include<vector>
#include<map>
using namespace std;

int IPtoNum(string ip){
	int temp = 0;
	while(ip[i]!='.'){
		temp = temp*10+ip[i]-'0';
	}
	res = (res<<8)|temp;
}

void ipNum(){
	//输入
	int T;
	cin>>T;
	for(int i = 0;i<T;i++){
		int N,M;
		cin>>N;
		cin>>M;
		vector<string> ip(N);
		vector<string> mask(M);
		for(int j=0;j<N;j++)
			cin>>ip.at(j);
		for(int j=0;j<M;j++)
			cin>>mask.at(j);
	//计算
		for(int k=0;k<M;k++){//对每一个子网掩码
			map<string,int> res;
			for(int n=0;n<N;n++){//分别计算每个IP经过MASK的结果
				//vector<string>::iterator ptr;
				for(int p=0;)
			}
		}
	}
}
