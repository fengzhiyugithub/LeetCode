/*
* @Author: yufeng
* @Date:   2018-10-25 17:25:43
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-25 17:29:00
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1!=NULL && l2!=NULL){
        	if(l1->val > l2->val){
        		ListNode* tmp=l1;
        		l1=l2;
        		l2=tmp;
        	}
        	l1->next=mergeTwoLists(l1->next, l2);
        }
        return l1?l1:l2;
    }
};