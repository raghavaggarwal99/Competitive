/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
TreeNode* solve(ListNode*&head, int start, int end){
    
    
    if(start>end){
        return NULL;
    }
    int mid = start + (end-start)/2;
    
    TreeNode* left=solve(head, start, mid-1);
    
    TreeNode* root = new TreeNode(head->val);
    
    head=head->next;
    
    TreeNode* right=solve(head, mid+1, end);
    
    root->left=left;
    root->right=right;
    
    return root;
    
    
}



TreeNode* Solution::sortedListToBST(ListNode* A) {
   
   if(A == NULL){
        return NULL;
    }
   
 int count=0;
 ListNode* curr=A;
 
 while(curr!=NULL){
     count++;
     curr=curr->next;
 }
 
 return solve(A,0,count-1);
   
   
}
