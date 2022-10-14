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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head;
        if(head->next==NULL){head=NULL;return head;}
        int count=0;
        if(head==NULL)return head;
        while(temp)
        {
            temp=temp->next;
            count++;
        }
        count=(count/2)+1;
        int fin=1;
        temp=head;
        while(fin!=count-1)
        {
            temp=temp->next;
            fin++;
        }
        temp->next=temp->next->next;
        return head;
        
    }
};