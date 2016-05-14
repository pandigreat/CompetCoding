/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/

class LongestPath {
public:
    int maxLen = 0;
    int getPath(TreeNode* root){
        if(root == NULL) return 0;
        int left = 0, right = 0;
        if(root->left != NULL){
            left = getPath(root->left);
            if(root->val != root->left->val)
                left = 0;
        }
        if(root->right != NULL){
            right = getPath(root->right);
            if(root->val != root->right->val)
                right = 0;
        }
        maxLen = max(maxLen, left+right+1);  //题目意思开始理解错了，以为路径一直是从上到下走，原来路径是可以通过从左子树到右子树 
        return  max(left, right) + 1;
    }
    int findPath(TreeNode* root) { 
        if(root == NULL) return 0;
        getPath(root);
        return maxLen;
    }
};