//Add Two Numbers
#include<iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

考虑二者不一样长（单独加，每次if判断）
注意每次处理余数，记得置零

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if((l1==NULL)||(l2==NULL)) return NULL;

        ListNode *pre = new ListNode(-1);
        ListNode *p = pre;
        int attachment = 0;
        while(l1||l2){
        	int res = 0;
        	if(l1) {res+=l1->val; l1 = l1->next;}
        	if(l2) {res+=l2->val; l2 = l2->next;}
        	res+=attachment;
        	if(res>9){
        		res-=10;
        		attachment = 1;
        	}else
        	{attachment = 0;}
        	ListNode *r = new ListNode(res);
        	pre->next = r;
        	pre = r;
        }
        if(attachment==1){
        	ListNode *r = new ListNode(attachment);
        	pre->next = r;
        	pre = r;
        }
        return p->next;
    }

    int main(){
    	return 0;
    }