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

node *createTree(){

    int data;
    cin>>data;
    if (data==-1) return NULL;

    node *root = new node(data);
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left = createTree();
    cout<<"Enter data for inserting in right of "<<data<<endl;
    root->right = createTree();
    return root;
}

void preorder(node *root){
    if (root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}
void inorder(node *root){
    if (root==NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node *root){
    if (root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int countNodes(node *root){
    if (root==NULL) return 0;
    int lstcountnodes = countNodes(root->left);
    int rstcountnodes = countNodes(root->right);
    return 1+lstcountnodes+rstcountnodes;
}

int height(node *root){
    if (root==NULL) return 0;
    int lstheight = height(root->left);
    int rstheight = height(root->right);
    int ans = max(lstheight,rstheight)+1;
    return ans;
}
int diameter(node *root){
    if (root==NULL) return 0;
    int lstheight = height(root->left);
    int rstheight = height(root->right);
    int op1= lstheight+rstheight+1;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1,max(op2,op3));
}

class Pair{
    public:
    int height,diameter;

};
Pair fastDiameter(node* root){
    if (root==NULL)
    {
        Pair ans;
        ans.height = ans.diameter = 0;
        return ans;
    }
    Pair left = fastDiameter(root->left);
    Pair right = fastDiameter(root->right);
    Pair ans;
    ans.height = max(left.height,right.height)+1;
    int op1 = left.height+right.height+1;
    int op2 = left.diameter;
    int op3 = right.diameter;
    ans.diameter = max(op1,max(op2,op3));
    return ans;
}
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
void mirrorTree(node* root){
    if (root == NULL)
    {
        return;
    }
    swap(root->left,root->right);
    mirrorTree(root->left);
    mirrorTree(root->right);
    
}


int main()
{
    //sample input -> 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    node *root = createTree();
    preorder(root);
    cout<<endl;
    inorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    cout<<"Nodes count->"<<countNodes(root)<<endl;
    cout<<"Levels count->"<<height(root)<<endl;
    cout<<"Diameter->"<<diameter(root)<<endl;
    cout<<"Fast Height->"<<fastDiameter(root).height<<endl;
    cout<<"Fast Diameter ->"<<fastDiameter(root).diameter<<endl;
    cout<<"Tree by levels ->"<<endl;
    levelOrderTraversal(root);
    cout<<"Mirrored Tree"<<endl;
    mirrorTree(root);
    levelOrderTraversal(root);
    return 0;
}