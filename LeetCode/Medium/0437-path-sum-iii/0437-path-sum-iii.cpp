class Solution {
public:
    void helper(TreeNode* root,int &count,long long targetSum){
        if(root==NULL) return;
        if((long long)root->val==targetSum){
            count++;
        }
        helper(root->left,count,targetSum-(long long)(root->val));
        helper(root->right,count,targetSum-(long long)(root->val));
    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;
        int count=0;
        helper(root,count,(long long)targetSum);
        count+=pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);
        return count;
    }
};