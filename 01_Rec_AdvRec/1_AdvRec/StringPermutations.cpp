#include<bits/stdc++.h>
using namespace std;

/*
Return all Permutations of the given string in Lexographically Increasing Order
Input: abc
Output: abc acb bac bca cab cba
*/

void genPermutations(string& s, int ind, int& n, vector<string>& ans){
    if(ind>=n){
        ans.push_back(s);
        return;
    }
    for(int i=ind;i<n;i++){
        swap(s[ind],s[i]);
        genPermutations(s,ind+1,n,ans);
        swap(s[ind],s[i]);
    }
}