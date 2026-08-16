class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        int temp = n;
        if(temp < 0){
            temp = -1*temp;
        }
        for(int i = 0; i < temp; i++){
            if(n > 0){
                ans *= x;
            }
            else{
                ans /= x;
            }
        }
        return ans;
    }
};