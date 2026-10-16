class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> results(n, 1);
        vector<int> before(n, 1);
        vector<int> after(n, 1);
        
        for (int i = 1; i < n; i++) {
            before[i] = nums[i - 1] * before[i - 1];
        }

        for (int j = n - 2; j >= 0; j--) {
            after[j] = nums[j + 1] * after[j + 1];
        }

        for (int k = 0; k < n; k++) {
            results[k] = before[k] * after[k];
        }

        return results;
    }
};
