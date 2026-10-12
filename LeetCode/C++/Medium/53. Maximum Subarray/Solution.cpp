class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int bestending;
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            bestending = max(sum,nums[i]);
            ans = max(ans,bestending);
        }
        return ans;
    }
};