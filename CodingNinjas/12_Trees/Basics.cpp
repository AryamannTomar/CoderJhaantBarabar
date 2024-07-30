#include <bits/stdc++.h>
using namespace std;
// 1 2 2 3 2 4 5 0 0 2 6 7 0 0 
#define fr(n) for(int i=0;i<n;i++)
template <typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode*> children;
    TreeNode(T data){
        this->data=data;
    }
};

TreeNode<int>* takeInput(){
    int rootData; cout<<"Enter data:"<<endl; cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    int n; cout<<"Enter num of children of "<<rootData<<endl; cin>>n;
    fr(n){
        TreeNode<int>* child=takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    int n=root->children.size();
    cout<<root->data<<":";
    fr(n) cout<<root->children[i]->data<<",";
    cout<<endl;
    fr(n) printTree(root->children[i]);
}

TreeNode<int>* takeInputLevelWise(){
    int rootData; cout<<"Enter Root Data"<<endl; cin>>rootData;
    TreeNode<int>* root=new TreeNode<int>(rootData);
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size()!=0){
        TreeNode<int>* front=pendingNodes.front(); pendingNodes.pop();
        cout<<"Enter Num of Children of "<<front->data<<endl;
        int numChild; cin>>numChild;
        fr(numChild){
            int childData; cout<<"Enter "<<i<<"th child of "<<front->data<<endl; cin>>childData;
            TreeNode<int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int main(){
    TreeNode<int>* root=takeInputLevelWise();
    printTree(root);
    return 0;
}