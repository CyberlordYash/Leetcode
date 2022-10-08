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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *list; ListNode *temp=list1;
        if(list1==NULL && list2==NULL)return list1;
        else if(list1==NULL)list=list2;
        else if(list2==NULL)list=list1;
        else{
            
            while(temp->next)
            {
            temp=temp->next;
            }
            temp->next=list2;
            list=list1;
        }
        ListNode *temp2=list;
        temp=list;
        while(temp2->next)
        {   temp=list;
            while(temp->next)
            {
            if(temp->val>temp->next->val)
            {
                swap(temp->val,temp->next->val);
            }
            temp=temp->next;
            }
         temp2=temp2->next;
        }
        return list;
    }
};