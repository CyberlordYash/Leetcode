/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *temp=head,*prev=NULL;
        while(temp)
        {
            if(temp->val==val)
            {
                if(temp==head)head=head->next;
                else{
                    
                    prev->next=temp->next;
                    temp=head;
                    prev=head;
                }
            } 
            prev=temp;
            temp=temp->next;
        }
        return head;
        
    }
};