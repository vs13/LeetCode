class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long firstValue = LONG_MIN;
        long secondValue = LONG_MIN;
        long thirdValue = LONG_MIN;
        for(int i : nums) {
            if(i > firstValue) {
                thirdValue = secondValue;
                secondValue = firstValue;
                firstValue = i;
            }
            else if(i == firstValue) {
                continue;
            }
            else if(i > secondValue) {
                thirdValue = secondValue;
                secondValue = i;
            }
            else if(i == secondValue) {
                continue;
            }
            else if(i > thirdValue) {
                thirdValue = i;
            }
        }
        return thirdValue == LONG_MIN ? firstValue : thirdValue;
    }
};