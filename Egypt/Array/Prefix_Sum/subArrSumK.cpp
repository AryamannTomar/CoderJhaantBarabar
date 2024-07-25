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

//============================================================================================================

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
    int n=arr.size(), res=0, prefix_sum=0;
    unordered_map<int, int> prefix_table;
    prefix_table[0]=1;
    fr(n){
        prefix_sum+=arr[i];
        if(prefix_table.count(prefix_sum-k)) res+=prefix_table[prefix_sum-k];
        prefix_table[prefix_sum]++;
    }
    return res;
}