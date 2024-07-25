#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>& a, pair<int,int>& b){
    if(a.second>b.second) return true;
    else if(a.second == b.second){
        return (a.first<b.first);
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>items(n);
    for(int i=0;i<n;i++) cin>>items[i].first>>items[i].second;
    vector<int>bags(k);
    for(int i=0;i<k;i++) cin>>bags[i];

    sort(items.begin(),items.end(),cmp);

    multiset<int>ms;
    for(auto i : bags) ms.insert(i);

    long long total=0;
    for(int i=0;i<n;i++){
        if(bags.empty()) break;
        auto itr = ms.lower_bound(items[i].first);
        if(itr == ms.end()) continue;
        total+=items[i].second;
        ms.erase(itr);
    }
    cout<<total;
    return 0;
}