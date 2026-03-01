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
int k=0;
int pre[] = {8,10,1,6,4,7,3,14,13};
node *createTree(int *in,int s,int e){

    if (s>e){
        return NULL;
    }
    node* root = new node (pre[k++]);
    int i;
    for (int j = s; j <= e; ++j)  {
        if (in[j]==root->data)
        {
            i = j;
            break;
        }
        
    }
    root->left = createTree(in,s,i-1);
    root->right = createTree(in,i+1,e);
    return root;
    
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


int main()
{
    //sample input -> 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
    int in[] = {1,10,4,6,7,8,3,13,14};
    int n = sizeof(in)/sizeof(int);
    node *root = createTree(in,0,n-1);
    levelOrderTraversal(root);
    

    return 0;
}