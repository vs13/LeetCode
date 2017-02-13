class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return binarysearch(nums,0,nums.size()-1,target);
    }
    int binarysearch(vector<int>& nums,int low,int high,int target) {
        int middle = low + (high-low)/2;
        if(low>high)
            return low;
        if(nums[middle] == target)
            return middle;
        else if(nums[middle] < target)
            return binarysearch(nums,middle+1,high,target);
        else
            return binarysearch(nums,low,middle-1,target);
    }
};