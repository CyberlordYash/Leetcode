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
    ListNode* rotateRight(ListNode* head, int k) {
        int count=1;
        ListNode *temp=head,*tail;
        if(head==NULL)return NULL;
         tail=temp;
        while(temp->next)
        {
            temp=temp->next;
            tail=temp;
            count++;
        }
        tail->next=head;
        int fin=count-(k%count);
       int count2=0;
        while(count2!=fin)
        {
            count2++;
            head=head->next;
            tail=tail->next;
        }
        tail->next=NULL;
        return head;
        
        
    }
};