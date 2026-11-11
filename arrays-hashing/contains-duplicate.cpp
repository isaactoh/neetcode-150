#include <vector>
#include <unordered_set>
#include <iostream>

class Solution {
public:
    bool hasDuplicate(std::vector<int>& nums) {

        std::unordered_set<int> seen;

        for (int num : nums) {
            if (seen.contains(num)) {
                return true;
            }
            else {
                seen.insert(num);
            }
        }
        return false;
    }
};

int main() {
    Solution solution;

    std::vector<int> nums = {1, 2, 3, 1};

    bool ans = solution.hasDuplicate(nums);
    
    std::cout << std::boolalpha << ans << std::endl;

    return 0;
}