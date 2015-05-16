//Path Sum II 
#include<iostream>
#include<vector>
using namespace std;


  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };

void dfs(TreeNode* root,int sum, int curSum,vector<vector<int> >& res, vector<int> nodeChain){
		if(root==NULL) return;

		nodeChain.push_back(root->val);

		if((curSum+root->val)==sum&&root->left==NULL&&root->right==NULL){
			res.push_back(nodeChain);
			nodeChain.pop_back();
			return;
		}

		dfs(root->left,sum,curSum+root->val,res,nodeChain);
		dfs(root->right,sum,curSum+root->val,res,nodeChain);
		nodeChain.pop_back();
}

vector<vector<int> > pathSum(TreeNode* root, int sum) {
        vector<vector<int> > res;
        vector<int> nodeChain;
        int curSum = 0;
        dfs(root,sum,curSum,res,nodeChain);
        return res;
    }

    int main(){
    	return 0;
    }
