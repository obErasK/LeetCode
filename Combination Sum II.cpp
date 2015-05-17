//Combination Sum II 
#include<iostream>
#include<vector>
using namespace std;

void dfs(vector<vector<int> > &res, vector<int> &cur, int cursum, int target, int start, vector<int> &candidates){
	if(cursum==target) {
		res.push_back(cur);
		return;
	}

	if(start>=candidates.size()||cursum>target)
		return;

	for(int i = start;i<candidates.size();){
		cur.push_back(candidates[i]);
		dfs(res, cur, cursum+candidates[i],target,i+1,candidates);
		cur.pop_back();

		int j = i+1;
		while(j<candidates.size()){
			if(candidates[i]==candidates[j])
				j++;
			else
				break;
		}
		i=j;
	}		
}


vector<vector<int> > combinationSum2(vector<int>& candidates, int target) {
		vector<vector<int> > res;
		vector<int> cur;
		int cursum;
		sort(candidates.begin(), candidates.end());
		dfs(res, cur, cursum, target, 0, candidates);
		return res;
    }

    int main(){
    	return 0;
    }