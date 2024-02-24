#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    vector<char>ch(m);
    for(int i=0;i<m;i++) cin>>ch[i];

    // Building a flag vector to fast check , which possible character we have to replace.
    vector<int>flag(26);
    for(int i=0;i<m;i++) flag[ch[i]-'a']=1;

    // Initalizing the freq-matrix & setting it to 0
    int freq[k][26];
    for(int i=0;i<k;i++){
        for(int j=0;j<26;j++){
            freq[i][j]=0;
        }
    }

    // Updating the frequency in the frequency-matrix
    for(int i=0;i<n;i++) freq[i%k][s[i]-'a']++;

    //Calculating the minimum number of changed for each
    //position in the window of size k & adding it
    int total=0;
    for(int i=0;i<k;i++){
        int maxi=0;
        int sum=0;
        for(int j=0;j<26;j++){
            sum+=freq[i][j];
            if(freq[i][j]>maxi && flag[j]==1) maxi = freq[i][j];
        }
        total+=(sum-maxi);
    }
    cout<<total<<"\n";
    return 0;
}