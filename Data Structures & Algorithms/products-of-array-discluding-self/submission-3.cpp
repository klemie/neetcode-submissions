class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> results(length, 1);

        int before = 1;
        for (int i = 0; i < length; i ++) {
            results[i] = before;
            before *= nums[i];
        }

        int after = 1; 
        for (int i = length - 1; i >= 0; i--) {
            results[i] *= after;
            after *= nums[i];
        }

        return results;
    }
};
