#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a , pair<int,int>& b){
    double f = (double)a.second/a.first;
    double s = (double)b.second/b.first;
    return f>s;
}

int main(){
     
    int n,capacity;
    cin>>n>>capacity;
    vector<pair<int,int>>a(n);
    for(int i=0;i<n;i++){
        // .first is weight and .second is price
        cin>>a[i].first>>a[i].second;
    }

    sort(a.begin(),a.end(),cmp);


    int total_weight=0;
    double profit=0;
    for(int i=0;i<n;i++){
        if(total_weight+a[i].first<capacity){
            total_weight+=a[i].first;
            profit+=(double)a[i].second;
        }
        else{
            int remain = capacity - total_weight;
            profit +=(double)(a[i].second)*((double)remain/a[i].first);
            break;
        }
    }
    cout<<"total profit: ";
    cout<<profit;
       
    return 0;
}