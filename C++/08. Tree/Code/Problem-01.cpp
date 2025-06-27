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
private:
    vector<int> modes;
    int current_val = INT_MIN;
    int current_count = 0;
    int max_count = 0;
    
    void countNodes(TreeNode* node) {
        if (!node) return;
        
        countNodes(node->left);
        
        if (node->val == current_val) {
            current_count++;
        } else {
            current_val = node->val;
            current_count = 1;
        }
        
        if (current_count > max_count) {
            max_count = current_count;
            modes.clear();
            modes.push_back(current_val);
        } else if (current_count == max_count) {
            modes.push_back(current_val);
        }
        
        countNodes(node->right);
    }
    
public:
    vector<int> findMode(TreeNode* root) {
        countNodes(root);
        
        current_val = INT_MIN;
        current_count = 0;
        vector<int> result;
        
        function<void(TreeNode*)> collectModes = [&](TreeNode* node) {
            if (!node) return;
            
            collectModes(node->left);
            
            if (node->val == current_val) {
                current_count++;
            } else {
                current_val = node->val;
                current_count = 1;
            }
            
            if (current_count == max_count) {
                result.push_back(current_val);
            }
            
            collectModes(node->right);
        };
        
        collectModes(root);
        return result;
    }
};
