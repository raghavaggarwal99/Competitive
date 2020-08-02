/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *temp=head;
        ListNode* next=NULL;
        ListNode* prev=NULL;
        
        
        while(temp!=NULL){
            
            next=temp->next;
            
            temp->next=prev;
            
            prev=temp;
            temp=next;
            
        }
        
        head=prev;
        
        return head;
        
    }
        
    
};
