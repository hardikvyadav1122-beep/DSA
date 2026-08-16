class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prosuf1 = 1;
        vector<int>answer(nums.size());
        for(int i = nums.size()-1; i >= 0; i--){
            int prosuf2 = prosuf1;
            prosuf1 *= nums[i];
            answer[i] = prosuf2;
        }
        int propre1 = 1;
        for(int i = 0; i < nums.size(); i++){
            int propre2 = propre1;
            propre1 *= nums[i];
            answer[i] *= propre2;
        }
        return answer;
    }  
};