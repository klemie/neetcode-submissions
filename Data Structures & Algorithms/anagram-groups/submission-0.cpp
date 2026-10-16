class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> groups;

        for (const auto& s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            groups[sorted].push_back(s);
        }

        for (auto& match : groups) {
            result.push_back(match.second);
        }

        return result;
    }
};
