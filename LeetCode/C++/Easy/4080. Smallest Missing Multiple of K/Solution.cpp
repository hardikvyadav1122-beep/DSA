class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>s;
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }

        int i;
        for( i = 1; i <= 100; i++){
         if(s.find(k*i) == s.end()){
            return k*i;
         }
        }
        return k*i;
    }
};