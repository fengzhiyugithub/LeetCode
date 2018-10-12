/*
* @Author: yufeng
* @Date:   2018-10-12 15:18:46
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-12 15:24:19
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
        	return NULL;
        }
        ListNode* pre=NULL;
        ListNode* next=NULL;
        while(head!=NULL){
        	next=head->next;
        	head->next=pre;
        	pre=head;
        	head=next;
        }
        return pre;
    }
};