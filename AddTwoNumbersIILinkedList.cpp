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
    
     ListNode* reverse(ListNode* &head){
        ListNode* prevptr=NULL;
        ListNode* currptr=head;
        ListNode* nextptr;

        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;

            prevptr=currptr;
            currptr=nextptr;
        }
        head = prevptr;
        return head; 
        }
    

    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        
        ListNode *dummyHead = new ListNode();
        ListNode *temp = dummyHead;
        int carry=0;
         while(l1!=NULL || l2!=NULL || carry){
             int sum=0;
             
             if(l1!=NULL){
                 sum = sum + l1->val;
                 l1 = l1->next;
             }
             
             if(l2!=NULL){
                 sum = sum + l2->val;
                 l2 = l2->next;
             }
             
             sum = sum + carry;
             carry = sum/10;
             
             ListNode *node = new ListNode(sum%10);
             temp->next = node;
             temp = temp->next;
             
         }
        reverse(dummyHead->next);
        return dummyHead->next;
    }
};
