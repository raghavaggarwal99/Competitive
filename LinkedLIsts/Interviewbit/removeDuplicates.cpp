/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    
    
    ListNode* temp1=A;
    ListNode* temp2;
    
    if(A==NULL){
        return NULL;
    }
    
    while(temp1->next!=NULL){
        
        if(temp1->val==temp1->next->val){
            ListNode *extra=temp1->next;
            temp1->next=temp1->next->next;
            free(extra);
        }
        else{
            temp1=temp1->next;
        }
    }
    
    return A;
    
    
    
    
}

