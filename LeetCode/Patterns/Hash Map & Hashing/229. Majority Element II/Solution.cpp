class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int val1;
        int val2;
        int x = 0;
        int n = nums.size();
        while(x < nums.size()){
            if(nums[x] == val1){
                cnt1++;
            }
            else if(nums[x] == val2){
                cnt2++;
            }
            else if(cnt1 == 0){
                val1 = nums[x];
                cnt1++;
            }
            else if(cnt2 == 0){
                val2 = nums[x];
                cnt2++;
            }
            else {
                cnt1--;
                cnt2--;
            }
            x++;
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] == val1) cnt1++;
            if(nums[i] == val2) cnt2++;
        }
        vector<int>v;
        if(cnt1 > n/3) v.push_back(val1);
        if(cnt2 > n/3) v.push_back(val2);
        return v;
    }
};