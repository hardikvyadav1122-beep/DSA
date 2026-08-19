class Solution {
public:
    bool capacity(vector<int>& weights,int days,int mid){
        int sum = 0;
        int mindays = 1;
        for(int i = 0; i < weights.size(); i++){
            if(sum + weights[i] > mid){
                mindays++;
                sum = weights[i];
            }
            else{
                sum += weights[i];
            }
        }
       
        return mindays <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);

        while(low < high){
            int mid = low + (high-low)/2;

            if(capacity(weights,days,mid)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};