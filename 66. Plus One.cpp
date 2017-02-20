class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        int carry = (digits[n-1]+1)/10;
        if(!carry)
            digits[n-1]+=1;
        for(int i = n-1; i>= 0 ; i--) {
            if((digits[i]+carry) > 9) {
                ans.push_back(0);
                carry=1;
            }
            else {
                ans.push_back(digits[i]+carry);
                carry = 0;
            }
        }
        if(carry) 
            ans.push_back(1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};