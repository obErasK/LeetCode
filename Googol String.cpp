#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

vector<int> swtichfunc(vector<int> num)
{
	vector<int>::iterator it;
	for(it=num.begin(); it!=num.end(); it++)
		*it = !(*it);
	return num;
}

int main()
{
	int T;
	cin>>T;

	vector<int> res;

	for(int r = 0; r<T; r++)
	{
		int K;
		cin>>K;

		int B = 0;
		int N = 0;

		while(B<K)
		{
			B = B*2+1;
			N++;
		}

		vector<int> num;
		num.push_back(0);
		vector<int>::iterator it;

		for(int i = 1; i<N; i++)
		{
			vector<int> tmp = num;
			reverse(tmp.begin(),tmp.end());
			tmp = swtichfunc(tmp);
			num.push_back(0);
			num.insert(num.end(),tmp.begin(),tmp.end());
		}

		res.push_back(num[K-1]);

		// for(it=num.begin(); it!=num.end(); it++)
		// 	cout<<*it;

		// cout<<endl;
		// cout<<num[K-1]<<endl;
	}
	int h = 1;
	for(vector<int>::iterator p=res.begin(); p!=res.end(); p++)
	{
		cout<<"Case #"<<h<<": "<<*p<<endl;
		h++;
	}

	return 0;
}