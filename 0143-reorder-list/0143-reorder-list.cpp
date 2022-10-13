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
    void reorderList(ListNode* head) {
        ListNode *temp=head;
        int size=0;
        vector<int > v,a;
        while(temp)
        {   v.push_back(temp->val);
            temp=temp->next;
         size++;
        }
        int front=0,back=size-1;
        for(int i=0;i<size;i++)
        {
            if(i%2==0){a.push_back(v[front]);
                      front++;}        
            else
            {
                a.push_back(v[back]);
                back--;
            }
        }
        temp=head;
        for(int i=0;i<size;i++)
        {
            temp->val=a[i];
            temp=temp->next;
        }
        
    }
    
};