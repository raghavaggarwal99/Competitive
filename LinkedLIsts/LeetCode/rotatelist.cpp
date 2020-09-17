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
    ListNode* rotateRight(ListNode* head, int k) {
        
        vector<int> ans;
        
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        
        int n=ans.size();
        
        if(n==0){
            return NULL;
        }
        
        k=k%n;

        vector<int> a;
        
        if(k!=0){
            for(int i= n-k; i<=n-1; i++){
                a.push_back(ans[i]);
            }
        }
        
        for(int i=0; i<=n-k-1; i++){
            a.push_back(ans[i]);
        }
        
        
         for(int i=0; i<=n-1; i++){
            cout<<a[i]<<" ";
        }
        
        
         ListNode * temp = new ListNode(a[0]);
        
        ListNode* w=temp;
        
        
            for(int i=1; i<n; i++){
                
                 ListNode * t= new ListNode(a[i]);
                
                temp->next=t;
                
                temp=temp->next;
                
            }
        
        return w;
        
        
        
        
    }
};
