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
    bool hasCycle(ListNode *head) {
        
        ListNode *prev,*next1;
       
        next1=head;
         prev=head;
        while(prev!=NULL && prev->next!=NULL && next1!=NULL && next1->next!=NULL)
        {
            prev=prev->next;
            next1=next1->next->next;
            if(prev==next1)return true;
        }
        return false;
        
    }
};