class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n <= 0)
            return {};
        vector<vector<int>> result;
        result.push_back(vector<int>{1});
        for(int i=1; i<n ; i++) {
            vector<int> currentRow;
            currentRow.push_back(1);
            for(int j=1 ; j<i ; j++) {
                currentRow.push_back(result[i-1][j-1] + result[i-1][j]);
            }
            currentRow.push_back(1);
            result.push_back(currentRow);
        }
        return result;
    }
};