/*
arr[i]==arr[j] and abs(i-j)<=k
*/

bool containsNearbyDup(vector<int>& arr, int k){
    int n=arr.size();
    unordered_set<int> s;
    fr(n){
        if(s.count(arr[i])) return true;
        s.insert(arr[i]);
        if(s.size()>k) s.erase(arr[i-k]);
    }
    return false;
}

bool containsNearbyDup_v1(vector<int>& arr, int k){
    int n=arr.size();
    unordered_map<int, int> mp;
    fr(n){
        if(mp.count(arr[i]) && i-mp[arr[i]]<=k) return true;
        mp[arr[i]]=i;
    }
    return false;
}