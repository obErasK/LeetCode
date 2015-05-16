//Reverse Nodes in k-Group

#include<iostream>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

void reverse(ListNode *begin,ListNode *end){
	ListNode *pre = new ListNode(-1);
	pre->next = begin;
	ListNode *node = begin;
	while(pre!=end){
		ListNode *temp = node->next;
		node->next = pre;
		pre = node;
		node = temp;
	}
}

ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL||k<2) return head;

        ListNode *pre = new ListNode(-1);
        pre->next = head;
        ListNode *begin = head;
        ListNode *end = head;
        
        ListNode *premark = pre;
        ListNode *postmark = head;

        while(end->next!=NULL){
        	int count = 1;
	        for(int step = 0;(step<(k-1))&&(end->next!=NULL);step++){
	        	end = end->next;
	        	count++;
	        }
	        if(count==k){
	        	postmark = end->next;
	        	reverse(begin,end);
	        	premark->next = end;
	        	premark = begin;
	        	begin->next = postmark;
	        	begin = postmark;
	        	end = postmark;
        	}
        }
        
        return pre->next;       
    }

    int main()
    {
    	return 0;
    }