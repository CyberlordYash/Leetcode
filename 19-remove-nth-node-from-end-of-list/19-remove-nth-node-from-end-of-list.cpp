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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int fin=count-n;
        int t=1;
        temp=head;
        if(fin==0)head=head->next;
        else
        {
            while(t!=fin)
            {
                temp=temp->next;
                t++;
                
            }
            temp->next=temp->next->next;
        }
        return head;
        
    }
};