class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mxHere = 0;
        int mxTotal = 0;
        bool flag = false;
        int mx = INT_MIN;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] > 0 && !flag)
                flag=true;
            mxHere += nums[i];
            if(mxHere < 0)
                mxHere = 0;
            if(mxHere > mxTotal)
                mxTotal = mxHere;
            mx = max(mx,nums[i]);
        }
        if(!flag)
            return mx;
        return mxTotal;
    }
};