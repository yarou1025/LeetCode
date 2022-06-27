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
class Solution
{
public:
    vector<TreeNode *> generateTrees(int n)
    {
        if (n == 0)
            return vector<TreeNode *>();
        return subTrees(1, n);
    }
    vector<TreeNode *> subTrees(int start, int end)
    {
        vector<TreeNode *> res;
        if (start > end)
            return vector<TreeNode *>();
        if (start == end)
            return vector<TreeNode *>{new TreeNode(start)};
        for (int i = start; i <= end; i++)
        {
            vector<TreeNode *> left = subTrees(start, i - 1);
            vector<TreeNode *> right = subTrees(i + 1, end);
            if (left.size() == 0)
            {
                for (auto r : right)
                {
                    TreeNode *root = new TreeNode(i, nullptr, r);
                    res.push_back(root);
                }
            }
            else if (right.size() == 0)
            {
                for (auto l : left)
                {
                    TreeNode *root = new TreeNode(i, l, nullptr);
                    res.push_back(root);
                }
            }
            else
            {
                for (auto l : left)
                {
                    for (auto r : right)
                    {
                        TreeNode *root = new TreeNode(i, l, r);
                        res.push_back(root);
                    }
                }
            }
        }
        return res;
    }
};