class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int>& v, vector<int>& nums, int k){

    for(int i = k; i < nums.size(); i++){
        v.push_back(nums[i]);
        ans.push_back(v);

        solve(v,nums,i+1);
        
        v.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        int k = 0;
        vector<int> v;
        ans.push_back(v);
        solve(v,nums,k);

        return ans;
    }
};