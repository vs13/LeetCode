class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> hash;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(hash.find(nums[i]) == hash.end()) {
                hash.insert(make_pair(target-nums[i],i));
            }
            else {
                ans.push_back(i);
                ans.push_back(hash[nums[i]]);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};