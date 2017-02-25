class Solution {
public:

    int findCandidate(vector<int>& nums, int n) {
        int count = 1;
        int candidate = nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i] == candidate)
                count++;
            else 
                count--;
            if(count == 0)
            {
                candidate = nums[i];
                count = 1;
            }
        }
        return candidate;
    }
    
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int candidate = findCandidate(nums, n);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(candidate==nums[i])
                count++;
        }
        if(count>(n/2))
            return candidate;
    }
};