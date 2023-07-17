class Solution {
public:
    void func(vector<int>& nums,vector<vector<int>>& ans,vector<int>& arr,int target,int idx,int n){
        if(idx==n){
            if(target==0){
                ans.push_back(arr);
            }
            return;
        }
        if(target<0) return;
        arr.push_back(nums[idx]);
        func(nums,ans,arr,target-nums[idx],idx,n);
        arr.pop_back();
        func(nums,ans,arr,target,idx+1,n);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>arr;
        func(nums,ans,arr,target,0,nums.size());
        return ans;
    }
};
