/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    
    
    if(A==NULL || A->next==NULL){
        return A;
    }
    
    ListNode* curr=A;
    ListNode* head;
    ListNode* prev=NULL;
    
    
    while(curr!=NULL && curr->next!=NULL){
        ListNode* temp=curr->next;
        curr->next=temp->next;
        temp->next=curr;
        
        if(prev==NULL){
            head=temp;
            
        }
        else{
            prev->next=temp;
        }
        prev=curr;
        curr=curr->next;
    }
    
    return head;
    
    
    
    
    
}

