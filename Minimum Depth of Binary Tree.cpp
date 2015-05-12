#include<iostream>
#include<queue>
using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
int minDepth1(TreeNode* root) {
        TreeNode* pNode = root;
        if(pNode==NULL) return 0;
        queue<TreeNode*> btree;
        btree.push(pNode);
        int count = 1;
        while(!btree.empty())
        {
        	pNode = btree.front();
        	btree.pop();
        	if(pNode->left==NULL&&pNode->right==NULL)
        		return count;
        	if(pNode->left!=NULL)
        		{ btree.push(pNode->left); count++;}
        	if(pNode->right!=NULL)
        		btree.push(pNode->right);
        }
    }

int minDepth(TreeNode* root) {
        TreeNode* pNode = root;
        if(pNode==NULL) return 0;
        if(!(pNode->left)) return 1+minDepth(pNode->right);
        if(!(pNode->right)) return 1+minDepth(pNode->left);
        if((pNode->right)&&(pNode->left)) return 1+minDepth(pNode->right)+minDepth(pNode->left);
    }

int main()
{
	TreeNode a(2);
	TreeNode *p = &a;
	cout<<minDepth(p)<<endl;
	return 0;
}