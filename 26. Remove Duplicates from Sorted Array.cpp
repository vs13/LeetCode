class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) 
            return 0;
        int slowIndex = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] == nums[i-1]) {
                continue;
            }
            else {
                nums[slowIndex++] = nums[i];
            }
        }
        return slowIndex;
    }
};