int SubArrK(vector<int>& arr){
    unordered_map<int,int> mp;
    int k=0, n=arr.size(), res=0, ps=0;
    mp[0]=-1;
    fr(n){
        ps+=arr[i];
        if(mp.count(ps-k)) res=max(res,i-mp[ps-k]);
        else mp[ps]=i;
    }
    return res;
}

int findMaxLength(vector<int>& arr) {
    int n=arr.size();
    fr(n) if(arr[i]==0) arr[i]=-1;
    return SubArrK(arr);        
}