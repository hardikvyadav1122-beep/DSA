class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int sum = 0;
        int bestending = 0;
        int ans = nums[0];
        for(int i = 0; i < nums.size(); i++){
        
            bestending = max(bestending + nums[i],nums[i]);
            ans = max(ans,bestending);
        }
        return ans;
    }
};