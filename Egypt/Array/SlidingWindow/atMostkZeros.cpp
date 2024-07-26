int longest_at_most_k(vector<int> &arr, int k){
    int len=0,n=arr.size();
    fr(n){
        for(int j=i, zeros=0;j<n;j++){
            // O(n^3)
            // int zeros=0;
            // for(int t=i;t<=j;t++) zeros+=arr[t]==0;

            // O(n^2)
            zeros+=arr[j]==0;
            if(zeros<=k) len=max(len,j-i+1);
            else break;
        }
    }
    return len;
}

// O(n)
int longestOnes(vector<int>& arr, int k){
    int len=0;
    for(int i=0, j=0, zeros=0;j<arr.size();j++){
        if(arr[j]==0){
            zeros++;

            while(zeros>k){
                zeros-=arr[i]==0;
                i++;
            }
        }
        len=max(len,j-i+1);
    }
    return len;
}