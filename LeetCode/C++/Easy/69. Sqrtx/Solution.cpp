class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = INT_MAX;
       
        int answer;
        while(low <= high){
            long long mid = low + (high-low)/2;
            if(mid*mid <= x){
                answer = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            } 
        }
        return answer;
    }
};