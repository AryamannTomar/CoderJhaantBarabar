// Don't allow range cancellation, in general problems solved with prefix are not that much

vector<int> prefix_arr(vector<int>& arr){
    int n=arr.size();
    vector<int> pre=arr;
    fr1(1,n){
        pre[i]+=pre[i-1];
    }
    return pre;
}

int range(vector<int>& pre, int s, int e){
    if(s==0) return pre[e];
    return pre[e]-pre[s-1];
}