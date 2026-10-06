class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int bestending = 0;
        int ans = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            int v1 = bestending + nums[i];
            int v2 = nums[i];
            bestending = max(v1, v2);
            ans = max(ans, bestending);
        }
        return ans;
    }
};