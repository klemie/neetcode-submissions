class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0, right = heights.size() - 1, results = 0;

        while (left < right) {
            int area = min(heights[left], heights[right]) * (right - left);
            results = max(results, area);

            if (heights[left] <= heights[right]) {
                left++;
            } else {
                right--;
            }
        }

        return results;
    }
};
