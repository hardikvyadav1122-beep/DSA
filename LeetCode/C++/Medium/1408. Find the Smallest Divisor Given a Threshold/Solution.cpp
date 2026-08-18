class Solution {
public:
    bool smallest(vector<int>& nums, int mid, int threshold){
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i]/mid;
            if(nums[i]%mid != 0){
                sum++;
            }
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());

        while(low < high){
            int mid = low + (high-low)/2;

            if(smallest(nums,mid,threshold)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};