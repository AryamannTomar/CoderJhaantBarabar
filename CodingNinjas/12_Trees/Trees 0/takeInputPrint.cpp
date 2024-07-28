#include <bits/stdc++.h>
using namespace std;
#define fr(n)          for(int i=0;i<n;i++)

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

TreeNode<int>* takeInput_LevelWise(){
    int root; cin>>root;
    TreeNode<int>* root
}

void printTree(TreeNode* root){
    int n=root->children.size();
    cout<<root->data<<":";
    fr(n) cout<<root->children[i]->data<<",";
    cout<<endl;
    fr(n) printTree(root->children[i]);
}

void printTree_LevelWise(TreeNode* root){

}