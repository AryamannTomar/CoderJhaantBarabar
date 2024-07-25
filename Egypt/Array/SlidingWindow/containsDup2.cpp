/*
arr[i]==arr[j] and abs(i-j)<=k

abs(i-j)<=k implies
    - In a window of K Numbers, we must have no duplicates!

Window Content: Implicit or Explicit?
    it must be explicit - Need to know if number appeared before!
*/

bool containsNearbyDuplicate(vector<int>& arr, int k){
    int n=arr.size();
    unordered_set<int> st;
    fr(n){
        if(st.count(arr[i])) return true;
        st.insert(arr[i]);
        if(st.size()>k) st.erase(arr[i-k]);
    }
    return false;
}

bool containsNearbyDuplicate_v1(vector<int>& arr, int k){
    int n=arr.size();
    unordered_map<int, int> mp;
    fr(n){
        if(mp.count(arr[i]) && i-mp[arr[i]]<=k) return true;
        mp[arr[i]]=i;
    }
    return false;
}