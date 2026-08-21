class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        if((arr[arr.size()-1] - arr.size()) < k){
            int xtra = k - (arr[arr.size()-1] - arr.size());
            return arr[arr.size()-1] + xtra;
        }
        int low = 0;
        int high = arr.size()-1;
        int missings;
        while(low <= high){
            int mid = low + (high-low)/2;
            missings = arr[mid] - (mid+1);
            if(missings < k){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
        }
        return low + k;
    }
};