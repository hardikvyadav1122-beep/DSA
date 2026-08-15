class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        unordered_map<int,int>prefix;
        unordered_map<int,int>suffix;
        prefix[0] = 1;
        suffix[nums.size()-1] = 1;
        int prosuf = 1;
        for(int i = nums.size()-2; i >= 0; i--){
            prosuf *= nums[i+1];
            suffix[i] = prosuf;
        }

        vector<int>answer(nums.size());
        int propre = 1;
        for(int i = 1; i < nums.size(); i++){
            propre *= nums[i-1];
            answer[i] = propre*suffix[i];
        }
        answer[0] = suffix[0];
        return answer;
    }  
};