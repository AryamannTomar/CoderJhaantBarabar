/*
Why to waste time here uneccesarily in computing in the prefix sums first?
*/

int maxConsSumk(vector<int>& arr, int k){
    int n=arr.size(), mx=INT_MIN;
    prefix_sum(arr);
    fr1(0,n-k+1){
        // int sum=0;
        // for(int j=0;j<k;j++) sum+=arr[i+j];
        // mx=max(mx,sum);
        mx=max(mx,range_sum(arr, i, i+k-1));
    }
    return mx;
}

int maxConsSumk_v1(vector<int>& arr, int k){
	int n=arr.size(), win_sum=0, mx=INT_MIN;
	fr1(0,k) win_sum+=arr[i];
	fr1(k,n){
		win_sum+=arr[i]-arr[i-k];
		mx=max(mx,win_sum);
	}
	return mx;
}