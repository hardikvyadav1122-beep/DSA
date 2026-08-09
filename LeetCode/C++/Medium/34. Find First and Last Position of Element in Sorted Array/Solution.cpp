class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        if(nums.empty()){
            return {-1,-1};
        }

        if(target < nums[0] || target > nums[n-1] ){
            return {-1,-1};
        }

        int low = 0;
        int high = n-1;
        int start = -1;
        int end = -1;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                start = mid;
                high = mid-1;
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        low = 0;
        high = n-1;
         while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                end = mid;
                low = mid+1;
            }
            else if(target < nums[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return {start,end};
    }
};