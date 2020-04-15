/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {

    stack<int> s;
    
    ListNode* temp=A;
    
    while(temp!=NULL){
        s.push(temp->val);
        
        temp=temp->next;
    }
    
    
    while(A!=NULL){
        if(A->val!=s.top()){
            return 0;
        }
        
        s.pop();
        A=A->next;
    }
    
    return 1;



}

