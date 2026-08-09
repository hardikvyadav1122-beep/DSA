class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int j;
        int k;
        
           vector<vector<int>> v;

        
            for (int i = 0; i < nums.size() - 2; i++) {
                if(i > 0 && nums[i] == nums[i-1]){
                    continue;
                }
                 j = i+1;
                 k = nums.size()-1;
                while(j<k){
                    if (nums[j] + nums[k] == -nums[i]) {
                        
                        vector<int> temp = {nums[i],nums[j],nums[k]};
                        
                        v.push_back(temp);
                        
                        j++;
                        k--;
                        while(j < k && nums[j] == nums[j-1]){
                            j++;
                        }
                        while(j < k && nums[k] == nums[k+1]){
                            k--;
                        }
                    }

                    else if (nums[j] + nums[k] > -nums[i]) {
                        k--;

                    } 
                    else {
                        j++;

                    }
                }
            }
        // vector<vector<int>> v(ans.begin(),ans.end());
        return v;

    }
};