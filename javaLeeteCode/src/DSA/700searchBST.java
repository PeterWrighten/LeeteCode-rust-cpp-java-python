import java.sql.Struct;

public class searchBST
{
    private class TreeNode
    {
        int val;
        TreeNode left;
        TreeNode right;
    }

    public TreeNode search(TreeNode root, int val)
    {
        if(root == null)    return null;
        if(root.val == val) return root;
        return search(val < root.val ? root.left:root.right, val);
    }
}