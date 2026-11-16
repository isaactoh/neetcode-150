class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        int acc = 1;
        for (int i = 1; i < n; i++) {
            acc *= nums[i - 1];
            prefix[i] = acc;
        }

        acc = 1;
        for (int j = n - 2; j >= 0; j--) {
            acc *= nums[j + 1];
            suffix[j] = acc;
        }

        vector<int> ans(n);

        for (int k = 0; k < n; k++) {
            ans[k] = prefix[k] * suffix[k];
        }

        return ans;
    }
};
