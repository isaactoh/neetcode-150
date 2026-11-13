#include <vector>
#include <unordered_map>
#include <queue>

class Solution {
public:
    std::vector<int> topKFrequent(std::vector<int>& nums, int k) {
        std::unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;
        }

        std::priority_queue<
            std::pair<int, int>,
            std::vector<std::pair<int, int>>,
            std::greater<std::pair<int, int>>
        > minHeap;

        for (const auto& [num, count] : counts) {
            minHeap.emplace(std::make_pair(count, num));

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        std::vector<int> ans;

        while (!minHeap.empty()) {
            ans.emplace_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;
    }
};
