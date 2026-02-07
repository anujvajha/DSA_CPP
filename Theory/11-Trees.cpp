#include<iostream>
#include<queue>
using namespace std;

class Node 
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
static int idx = -1;

// construct a binary tree
Node* buildTree(vector<int>preOrder) // O(n)
{
    idx++;
    if(preOrder[idx]==-1) return NULL;
    Node* root = new Node(preOrder[idx]);
    root->left = buildTree(preOrder);
    root->right = buildTree(preOrder);
    return root;
}

// all traversals - O(n)
// preorder traversal
void preorder(Node* root)
{
    if(root==NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// inorder traversal
void inorder(Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// postorder traversal
void postorder(Node* root)
{
    if(root==NULL) return;
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

// levelorder traversal
void levelorder (Node* root)
{
    queue<Node*> q;
    q.push(root);

    while(q.size()>0)
    {
        Node* curr = q.front();
        q.pop();

        cout << curr->data << " ";
        if(curr->left!= NULL) q.push(curr->left);
        if(curr->right!= NULL) q.push(curr->right);
    }
    cout << endl;
}


int main ()
{
    vector<int> preOrder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preOrder);
    cout << root->data << endl;

    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelorder(root);
    cout << endl;
}