#include <bits/stdc++.h>
using namespace std;

#define fr(n)          for(int i=0;i<n;i++)
#define fr1(a,b)       for(int i=a;i<b;i++)
#define fr2(i,a,b)     for(int i=a;i<b;i++)

/*
    Trie* obj=new Trie();
    obj->insert(word);
    obj->search(word);
    obj->startsWith(word);
*/

struct Node{
    Node* links[26];
    bool flag=false;
    bool containsKey(char ch){return links[ch-'a']!=NULL;}
    void put(char ch, Node* node){links[ch-'a']=node;}
    Node* get(char ch){return links[ch-'a'];}
};

class Trie{
private: Node* root;
public:
    Trie(){root=new Node();}
    //-----------------------------//
    void insert(string word){
        Node* node=root;
        fr(word.length()){
            if(!node->containsKey(word[i])) node->put(word[i],new Node());
            node=node->get(word[i]);
        }
        node->flag=true;
    }
    //-----------------------------//
    bool search(string word){
        Node* node=root;
        fr(word.length()){
            if(!node->containsKey(word[i])) return false;
            node=node->get(word[i]);
        }
        return node->flag;
    }
    //-----------------------------//
    bool startsWith(string word){
        Node* node=root;
        fr(word.length()){
            if(!node->containsKey(word[i])) return false;
            node=node->get(word[i]);
        }
        return true;
    }
};

int main(){
    
    return 0;
}