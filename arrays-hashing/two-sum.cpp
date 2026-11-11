#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
    
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int diff = target - num;

            if (seen.contains(diff)) {
                return std::vector<int>{i, seen[diff]};
            }
            
            seen[num] = i;
        }

        return {};
    }
};