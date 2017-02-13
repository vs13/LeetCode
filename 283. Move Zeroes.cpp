class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0 ) {
                nums[index] = nums[i];
                index++;
            }
            else {
                count++;
            }
        }
        for(int j = n-1;count>0;count--,j--) {
            nums[j] = 0;
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int lastNonZeroIndex = 0,currentIndex = 0;currentIndex < nums.size();currentIndex++) {
            if(nums[currentIndex] != 0) {
                swap(nums[lastNonZeroIndex++],nums[currentIndex]);
            }
        }
    }
};