class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xorValue = 0;
        for(int i = 1 ; i <= n ; i++) {
            xorValue ^= i;
        }
        for(int i = 0 ; i < n ; i++) {
            xorValue ^= nums[i];
        }
        return xorValue;
    }
};