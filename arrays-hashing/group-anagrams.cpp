#include <vector>
#include <string>
#include <unordered_map>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>> ans;
        std::unordered_map<std::string, std::vector<std::string>> groups;

        for (std::string str : strs) {
            std::string s = str;

            sort(s.begin(), s.end());

            groups[s].emplace_back(str);
        }

        for (const auto& [key, list] : groups) {
            ans.emplace_back(list);
        }

        return ans;
    }
};
