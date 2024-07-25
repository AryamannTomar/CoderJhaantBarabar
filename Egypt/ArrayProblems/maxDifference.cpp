// Large number appears to the right of it

int maxDiff(vector<int>& arr){
    int mx=INT_MIN;
    int n=arr.size();
    fr(n){
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[i]) mx=max(mx,arr[j]-arr[i]);
        }
    }
    return mx;
}

int maxDiff_v1(vector<int>& arr){
    int mx_so_far=arr.back();
    int ans=INT_MIN;
    for(int i=arr.size()-2;i>=0;i--){
        if(arr[i]<mx_so_far){
            ans=max(ans, mx_so_far-arr[i]);
        }
        mx_so_far=max(mx_so_far, arr[i]);
    }
    return ans;
}   