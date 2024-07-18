#include<iostream>
using namespace std;
class Node
{
   public:
       int data;
       Node *lnode;
       Node *rnode;
       Node(int value)
       {
           data = value;
           lnode = NULL;
           rnode = NULL;
       }

};
Node* insert(Node *root,int data)
{
    if(root == NULL)
    {
        return new Node(data);
    }
    if(data < root->data)
    {
        root->lnode = insert(root->lnode, data);
    }
    else if(data > root->data)
    {
        root -> rnode = insert(root->rnode,data);
    }
    return root;
}


//three types of printing binary tree -> inorder->left root r8 , preorder ->root left r8 ,postorder->left r8 root
void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->lnode);
        cout<<root->data<<" ";
        inOrder(root->rnode);

    }
}
int main()
{
    Node *root = NULL;
    root = insert(root,50);   //creating root element
    insert(root,60);
    insert(root,40);
    insert(root,25);
    insert(root,80);
    insert(root,35);
    insert(root,10);
    cout<<"In-Order transversal of the BST";
    cout<<" ";
}

//15,25,28,30,35,40,45,50,55,60,70  inorder
//40,30,25,15,28,35,50,45,60,55,70  preorder
//15,28,25,35,30,45,55,70,60,50,40  postorder
