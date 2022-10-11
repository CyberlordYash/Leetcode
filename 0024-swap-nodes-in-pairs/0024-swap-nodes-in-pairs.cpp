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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)return head;
        if(head->next==NULL)return head;
        ListNode *temp=head;
        int count=0;
        while(temp)
        {   count++;
            temp=temp->next;
        }
        count=count/2;
        int fin=0;
        ListNode *prev=head,*next=head->next;
        while(fin!=count)
        {
            swap(prev->val,next->val);
            if(next->next!=NULL){
            prev=prev->next->next;
            next=next->next->next;
            }
            fin++;
        }
        
        
        return head;
        
    }
    
};  