#include<iostream>
#include<vector>
using namespace std;

int candy(vector<int> &ratings) {
        int sum = 0;
		const int N = ratings.size();
		if(N == 0)
			return 0;
		if(N == 1)
			return 1;
		vector<int> count(N,1);
		for(int i = 0;i<N;++i){
			if(i==0){
				if(ratings.at(i)>ratings.at(i+1))
					if(count.at(i)<=(count.at(i+1)))
						count.at(i) = count.at(i+1)+1;
			}
			if(i==N-1){
				if(ratings.at(i)>ratings.at(i-1))
					if(count.at(i)<=count.at(i-1))
						count.at(i) = count.at(i-1)+1;
			}
			if((i!=0)&&(i!=N-1)){
				if(ratings.at(i)>ratings.at(i-1))
					if(count.at(i)<=count.at(i-1))
						count.at(i) = count.at(i-1)+1;
				if(ratings.at(i)>ratings.at(i+1))
					if(count.at(i)<=(count.at(i+1)))
						count.at(i) = count.at(i+1)+1;
			}
			
		}
		for(int i = N-1;i>=0;--i){
			if(i==0){
				if(ratings.at(i)>ratings.at(i+1))
					if(count.at(i)<=(count.at(i+1)))
						count.at(i) = count.at(i+1)+1;
			}
			if(i==N-1){
				if(ratings.at(i)>ratings.at(i-1))
					if(count.at(i)<=count.at(i-1))
						count.at(i) = count.at(i-1)+1;
			}
			if((i!=0)&&(i!=N-1)){
				if(ratings.at(i)>ratings.at(i-1))
					if(count.at(i)<=count.at(i-1))
						count.at(i) = count.at(i-1)+1;
				if(ratings.at(i)>ratings.at(i+1))
					if(count.at(i)<=(count.at(i+1)))
						count.at(i) = count.at(i+1)+1;
			}
		}
		for(int j = 0;j<N;++j)
			sum+=count.at(j);
		return sum;
    }

void main(){
	int a[]={0};
	vector<int> ratings(a,a+1);
//	for(vector<int>::iterator m = ratings.begin();m!=ratings.end();++m)	cout<<*m<<endl;
/*	int N = ratings.size();
	int sum = 0;
	for(int j = 0;j<N;++j)
			sum+=ratings.at(j);
	cout<<sum<<endl; */
	cout<<candy(ratings)<<endl;
}