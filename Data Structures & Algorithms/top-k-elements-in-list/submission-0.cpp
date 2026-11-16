class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;

        for (int num : nums) {
            counts[num]++;
        }

        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > minHeap;

        for (const auto& [num, count] : counts) {
            minHeap.emplace(make_pair(count, num));

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> ans;

        while (!minHeap.empty()) {
            ans.emplace_back(minHeap.top().second);
            minHeap.pop();
        }

        return ans;
    }
};
