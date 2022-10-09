#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

vector<Node*> l;
vector<Node*> r;


void Inorder(Node* root , bool a){

    if (a == 1)
    {
        if (root->left == NULL || root->right == NULL)
        {
            l.push_back(NULL);
            return ;
        }
        if (root->left == NULL and root->right == NULL)
        {
            return;
        }
        
        
        Inorder(root->left, a);
        // cout<<root->data<<" ";
        l.push_back(root);
        Inorder(root->right, a);
        return;
    }else
    {
        if (root->left == NULL || root->right == NULL)
        {
            l.push_back(NULL);
            return ;
        }
        if (root->left == NULL and root->right == NULL)
        {
            return;
        }
        
        Inorder(root->left, a);
        // cout<<root->data<<" ";
        r.push_back(root);
        Inorder(root->right, a);
        return;
    }
    
}

void foldable(Node* root){
    
    Inorder(root->left, 1);
    Inorder(root->right, 0);

    cout<<" Inorder of left "<<endl;
    for (int i = 0; i < l.size(); i++)
    {
        cout<<l[i]<<" ";
    }

    cout<<" Inorder of Right "<<endl;
    for (int i = 0; i < r.size(); i++)
    {
        cout<<r[i]<<" ";
    }
    
    return ;
}

int main(){
    
    Node* root = new Node(194);
    root->left = new Node(353);
    root->right = new Node(640);
    root->left->left = new Node(756);
    root->right->right = new Node(482);
    root->right->left = new Node(73);
    root->left->left->left = new Node(851);
    root->left->left->right = new Node(651);
    root->right->left->right = new Node(219);

    foldable(root);

    return 0;
}