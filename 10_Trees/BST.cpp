#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int d){
        data = d;
        left = right = NULL;
    }
};
void levelOrderTraversal(node *root){
    
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
    node* f = q.front();
    q.pop();
    if (f!=NULL){
        cout<<f->data<<" ";
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }}
        
    else{
        cout<<endl;
        if (!q.empty())
        {
            q.push(NULL);
        }
        
    }
    }
}
node *insertinBST(node *root,int data){
    if (root==NULL)
    {
        root= new node(data);
        return root;
    }
    if (root->data>data){
        root->left = insertinBST(root->left,data);
        return root;
    }
    else{
        root->right = insertinBST(root->right,data);
        return root;
    }
    
}
node *buildBST(){
    node *root = NULL;
    int data;
    cin>>data;
    while (data!=-1)
    {
        root = insertinBST(root,data);
        cin>>data;
    }
    return root;
}
node *searchnode(node *root,int data){
    if (root == NULL) {
        return NULL;
    }
    if (root->data == data) return root;
    node *leftAns = searchnode(root->left,data);
    if (leftAns != NULL) return leftAns;
    node *RightAns = searchnode(root->right,data);
    if (RightAns!=NULL) return RightAns;
}
int main()
{
    
    node* root = buildBST();
    levelOrderTraversal(root);
    cout<<searchnode(root,5);
    return 0;
}