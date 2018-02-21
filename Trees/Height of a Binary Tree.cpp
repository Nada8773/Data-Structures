int max(int left,int right)
{
    if(left>right)
    {
        return left;
    }
    else
    {
        return right;
    }
}
    int height(Node* root)
    {
       if(root==NULL)
       {
           return -1;
       }
       int  left_Hight=height(root->left);  // i don't understand how get value for left_Hight and  right_Hight
       int  right_Hight=height(root->right);
       return max(left_Hight,right_Hight)+1;
    }
