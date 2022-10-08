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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode *temp1=l1,*temp2=l2,*head,*temp;int sum=0,carry=0,count=0;
        while(temp1!=NULL || temp2!=NULL ||carry!=0)
        {   int num1=0,num2=0;
            if(temp1!=NULL)num1=temp1->val;
            if(temp2!=NULL)num2=temp2->val;
         
         if(temp1==NULL && temp2==NULL){num1=0;num2=0;}
         sum=sum+num1+num2;
         carry=sum/10;
         sum=sum%10;
         if(count==0){
              ListNode *t=new ListNode;
         t->val=sum;
         t->next=NULL;
             head=t;
             temp=head;
         }
         else {
         ListNode *t=new ListNode;
         t->val=sum;
         t->next=NULL;
         temp->next=t;
         temp=temp->next;
         }count++;
         
         sum=carry;
         
         
         
         
         if(temp1!=NULL)temp1=temp1->next;
         if(temp2!=NULL)temp2=temp2->next;
         
        }
        return head;
        
    }
    
};