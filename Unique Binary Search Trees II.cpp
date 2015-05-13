//Unique Binary Search Trees II 
#include<iostream>
#include<vector>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };



vector<TreeNode*> gTrees(int begin, int end) {
		std::vector<TreeNode*> v;
        if(begin>end) { v.push_back(0); return v; }

        if(begin==end) {
        	TreeNode *pNode = new TreeNode(begin);
        	v.push_back(pNode);
        	return v;
        } 

        std::vector<TreeNode*> vleft,vright;
        for(int i = begin;i<=end;i++){
        	vleft = gTrees(begin,i-1);
        	vright = gTrees(i+1,end);

        	for(int k = 0; k<=vleft.size();k++){
	        	for(int j = 0; j<vright.size();j++){
	        		TreeNode* temp = new TreeNode(i);
	        		temp->left = vleft.at(k);
	        		temp->right = vright.at(j);
	        		v.push_back(temp);
	        	}
	        }
        }
        return v;
    }

vector<TreeNode*> generateTrees(int n) {
        return gTrees(1,n);
    }

    int main(){

    }
