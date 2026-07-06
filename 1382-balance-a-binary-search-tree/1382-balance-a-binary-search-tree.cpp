/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* balance(int i,int j,vector<int>&inorder){
        
if(i>j) return NULL;

int  mid=(i+j)/2;
 TreeNode* head=new TreeNode(inorder[mid]);

head->left=balance(i,mid-1,inorder);
head->right=balance(mid+1,j,inorder);
return head;

}



    TreeNode* balanceBST(TreeNode* root) {
        if(root==NULL) return NULL;
        vector<int>inorder;
     TreeNode* temp=root;
        // while(temp){
        //      inorder.push_back(temp->val);
        //      temp=temp->next;
        // }
        // sort(inorder.begin(),inorder.end());

        stack<TreeNode*>st;

        while(temp || !st.empty() ){

        if(temp){
            st.push(temp);
            temp=temp->left;
        }
        else {
            temp=st.top();
            inorder.push_back(st.top()->val);
            st.pop();
             temp=temp->right;
        }

        }
int n=inorder.size();
int mid=n/2;
TreeNode* head=  balance(0,n-1,inorder);
return head;


    }
};