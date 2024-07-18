#include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node* insert(Node *root,int data)
{
    if(root==NULL)
    {
        return new Node(data);
    }
    if(data<root->data)
    {
        root->left = insert(root->left,data);
    }
    else if(data>root->data)
    {
        root->right = insert(root->right,data);
    }
    return root;
}
    void InOrder(Node *root)
    {
        if(root!=NULL)
        {

            InOrder(root->left);
            cout<<root->data<<" ";
            InOrder(root->right);

        }
    }
    void PreOrder(Node *root)
    {
        if(root!=NULL)
        {
            cout<<root->data<<" ";
            PreOrder(root->left);
            PreOrder(root->right);

        }
    }
    void PostOrder(Node *root)
    {
        if(root!=NULL)
        {
            PostOrder(root->left);
            PostOrder(root->right);
            cout<<root->data<<" ";

        }
    }


int main()
{
        Node *root = NULL;
        root = insert(root,40);
        insert(root,30);
        insert(root,50);
        insert(root,25);
        insert(root,35);
        insert(root,45);
        insert(root,60);
        insert(root,15);
        insert(root,28);
        insert(root,55);
        insert(root,70);

        InOrder(root);
        cout<<endl;
        PreOrder(root);
        cout<<endl;
        PostOrder(root);
        cout<<endl;

}
