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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        long long int size=0;
        while(temp)
        {   size++;
            temp=temp->next;
        }
        temp=head;
            size--;
        long long int ans=0;
        while(temp)
        {
                ans=ans+(pow(2,size)*(temp->val));
            temp=temp->next;
            size--;
        }
        return ans;
        
    }
};