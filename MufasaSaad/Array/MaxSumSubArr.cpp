// Prefix-Based Approach
int maxSubArray(vector<int>& arr){
    int prefix_sum=0, prefix_sum_min_so_far=INT_MAX, max_so_far=INT_MIN;
    fr(n){
        prefix_sum+=arr[i];
        max_so_far=max(max_so_far, prefix_sum);
        if(i) max_so_far=max(max_so_far, prefix_sum-prefix_sum_min_so_far)
        prefix_sum_min_so_far=min(prefix_sum_min_so_far, prefix_sum)
    }
    return max_so_far;
}

int maxSubArray_v1(vector<int>& arr){
    int max_sum_end_i=0, max_so_far=INT_MIN;
    fr(n){
        max_sum_end_i=max(arr[i],max_sum_end_i+arr[i]);
        max_so_far=max(max_so_far, max_sum_end_i)
    }
    return max_so_far;
}