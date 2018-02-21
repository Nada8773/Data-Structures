/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
   struct Node {
      int data;
      Node* left;
      Node* right;
   }
*/
#define minValue -1
#define maxValue 10001

bool ISB(Node* root,int min,int max)
{
       if (root ==NULL) return true;

        if(((root->data)>min) &&((root->data)<max) &&(ISB(root->left,min,root->data)) && (ISB(root->right,root->data,max)) )
       {
            return true;
       }




       else
       {
           return false;
       }

}
bool checkBST(Node* root)
   {

    return ISB(root,minValue,maxValue);
   }




