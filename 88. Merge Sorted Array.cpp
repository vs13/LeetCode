class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i = m-1, j = n-1;
        int k = m+n-1;
        while(i>=0 && j>=0) {
            if(a[i] > b[j]) {
                a[k--] = a[i--];
            }
            else if(b[j] > a[i]) {
                a[k--] = b[j--];
            }
            else {
                a[k--] = b[j--];
            }
        }
        while(i>=0) {
            a[k--] = a[i--]; 
        }
        while(j>=0) {
            a[k--] = b[j--];
        }
    }
};