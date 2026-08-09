class Solution {
public:
    bool check(vector<int>& nums) {
        int x = 0;
        // int cnt = 0;
        vector<int> v(nums.size());

        while(x < nums.size()){
            for(int i = 0; i < nums.size(); i++){
              v[i] = nums[(i+x) % nums.size()] ;
            }
            if (is_sorted(v.begin(),v.end())){
                return true;
            }
            x++;
        }
        return false;
    }
};