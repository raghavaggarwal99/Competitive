/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    vector<int> B;
    
    
    
    for(int i=0; i<A.size(); i++){
        
        ListNode* temp=A[i];
        
        while(temp!=NULL){
            B.push_back(temp->val);
            
            temp=temp->next;
        }
        
        
    }
    
    sort(B.begin(), B.end());
    
 
    ListNode* head= new ListNode(B[0]);
    
    ListNode* tail=head;
    
    // head=head->next;
    
    for(int i=1; i<B.size(); i++){
        
        ListNode* temp=new ListNode(B[i]);
        
        head->next=temp;
        
        head=head->next;
        
    }
    
    return tail;
    
    


}
