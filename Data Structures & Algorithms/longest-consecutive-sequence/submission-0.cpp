class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int streak = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {
                int length = 1; 
                while (numSet.find(num + length) != numSet.end()) length ++;
                streak = max(streak, length);
            }
        }
        return streak;
    }
};
