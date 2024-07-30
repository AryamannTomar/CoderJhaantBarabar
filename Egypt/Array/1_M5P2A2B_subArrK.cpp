/*
Any problem that asks for a window of numbers is a range problem
Total no of subarrays whose sum==k
vector<int> arr={9,-9,2,3,4}; target=9

void prefix_sum(vector<int>& arr){
    int n=arr.size();
    fr1(1,n){
        arr[i]+=arr[i-1];
    }
}

int range_sum(vector<int>& pre, int s, int e){
    if(s==0) return pre[e];
    return pre[e]-pre[s-1];
}
*/

int subArrSum(vector<int>& arr, int k){
    int n=arr.size(), res=0;
    prefix_sum(arr);
    fr(n){
        for(int e=i; e<n; e++){
            // int sum=0;
            // for(int idx=i;idx<=e;idx++) sum+=arr[idx];
            // if(sum==k) res++;
            if(range_sum(arr,i,e)==k) res++;
        }
    }
    return res;
}

int subArrSum_v1(vector<int>& arr, int k){
    unordered_map<int,int> mp;
    int n=arr.size(),res=0,ps=0;
    mp[0]=1;
    fr(n){
        ps+=arr[i];
        if(mp.count(ps-k)) res+=mp[ps-k];
        mp[ps]++;
    }
    return res;
}