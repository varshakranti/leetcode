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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp){
            temp=temp->next;
            count++;
        }
        int middle = count/2 + 1;
        cout<<middle;
        temp=head;
        
        while(temp && middle!=1){
            middle--;
            temp=temp->next;
        }
        return temp;
    }
};


// class Solution {
// public:
//     ListNode* middleNode(ListNode* head) {
//         ListNode* ptr=head;int c=0;
//         while(ptr!=NULL)
//         {   c++;
//             ptr=ptr->next;
//         }
//         ptr=head;
//         int m=c/2+1;
//         while(ptr!=NULL && m!=1)
//         {m--;
//          ptr=ptr->next;     
//         }
//     return ptr;          
//     }
// };
