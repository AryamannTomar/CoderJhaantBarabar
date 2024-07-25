vector<int> two(vector<int>& nums, int target){
    fr(nums.size()){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j]==target) return {i,j};
        }
    }
    return {0,0};
}

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> mp;
    fr(nums.size()){
        int x=target-nums[i];
        if(mp.count(x)) return {i,mp[i]};
        mp[nums[i]]=i;
    }
    return {0,0};
}