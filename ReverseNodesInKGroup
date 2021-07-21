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
    
    ListNode* Rev(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr) return head;
        
        ListNode *prev = NULL;
        ListNode *cur = head;
        ListNode *next;
        ListNode *refrence = cur;
        int c=0;
        while(cur!=NULL && c<k)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            c++;
        }
        head=prev;
        if(c<k)
        {
            head=Rev(prev);
            //refrence->next=cur;
            return head;
        }
        refrence->next=reverseKGroup(cur,k);
        return head;
    }
};
