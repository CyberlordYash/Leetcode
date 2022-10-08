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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *temp;
        temp=head;
        ListNode *next1;  
        while(temp!=NULL)
        {
            next1=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next1;
        }

          return prev;
    }
  
};