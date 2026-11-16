class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string s : strs) {
            string str = s;

            sort(str.begin(), str.end());

            groups[str].emplace_back(s);
        }

        vector<vector<string>> ans;

        for (const auto& [key, l] : groups) {
            ans.emplace_back(l);
        }

        return ans;
    }
};
