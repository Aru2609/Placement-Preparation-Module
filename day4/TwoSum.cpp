class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        int a=0;
        for(int i =0;i <nums.size(); i++)
        {
            int k = (target - nums[i]);
            if(m[k]>0)
            {
                
                ans.push_back(i);
                ans.push_back(m[k]-1);
            }
            else
            {
                
                m[nums[i]]=i+1;
                
            }
          }
        return ans;
    }
};
