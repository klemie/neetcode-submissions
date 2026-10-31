class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        int result = 1, streak = 1;
        sort(nums.begin(), nums.end());

        for (int num = 1; num < nums.size(); num++) {
            if (nums[num] == nums[num - 1]) {
                continue;
            } else if (nums[num] == nums[num - 1] + 1) {
                streak ++;
            } else {
                streak = 1;
            }

            result = max(streak, result);
        }
        return result;
    }
};
