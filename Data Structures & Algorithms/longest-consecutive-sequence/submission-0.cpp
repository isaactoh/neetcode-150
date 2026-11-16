class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen;
        int ans = 0;

        for (int num : nums) {
            seen.insert(num);
        }

        for (int num : nums) {
            if (!seen.contains(num - 1)) {
                int curr = num + 1;
                int count = 1;

                while (seen.contains(curr)) {
                    curr++;
                    count++;
                }

                ans = max(ans, count);
            }
        }
        return ans;
    }
};
