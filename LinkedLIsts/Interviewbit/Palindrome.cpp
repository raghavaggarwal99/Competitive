/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {

    // stack<int> s;
    
    // ListNode* temp=A;
    
    // while(temp!=NULL){
    //     s.push(temp->val);
        
    //     temp=temp->next;
    // }
    
    
    // while(A!=NULL){
    //     if(A->val!=s.top()){
    //         return 0;
    //     }
        
    //     s.pop();
    //     A=A->next;
    // }
    
    // return 1;
    
    
    vector<int> v;
    
      ListNode* temp=A;
    
     while(temp!=NULL){
        v.push_back(temp->val);
        
        temp=temp->next;
    }
    
    int n=v.size();
    
    for(int i=0; i<n/2; i++){
        
        if(v[i]!=v[n-1-i]){
            return 0;
        }
        
    }
    
    return 1;



}

