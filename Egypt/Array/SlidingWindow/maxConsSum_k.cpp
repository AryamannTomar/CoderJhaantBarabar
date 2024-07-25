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

//=============================================================================================

int maxConsecutiveSum_k(vector<int>& arr, int k){
    int n=arr.size(), mx=INT_MIN;
    prefix_sum(arr);
    fr1(0,n-k+1){
        // int sum=0;
        // for(int j=0;j<k;j++){
        //     sum+=arr[i+j];
        // }
        // mx=max(mx,sum);

        mx=max(mx,range_sum(arr, i, i+k-1));
    }
    return mx;
}

int maxConsecutiveSum_k_v1(vector<int>& arr, int k){
    int n=arr.size(), window_sum=0;
    fr1(0,k) window_sum+=arr[i];
    int mx=window_sum;
    fr1(k,n){
        window_sum+=arr[i]-arr[i-k];
        mx=max(mx, window_sum);
    }
    return mx;
}