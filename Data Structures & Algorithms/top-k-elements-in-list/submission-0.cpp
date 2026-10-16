class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++; 
        } 

        using Pair = pair<int, int>;
        priority_queue<Pair, vector<Pair>, greater<Pair>> frequencyMatch;

        for (const auto& [num, freq] : count) {
            frequencyMatch.push({freq, num});
            if (frequencyMatch.size() > k) {
                frequencyMatch.pop();
            }
        }

        vector<int> result;
        while (!frequencyMatch.empty()) {
            result.push_back(frequencyMatch.top().second);
            frequencyMatch.pop();
        }
        return result;
    }
};
