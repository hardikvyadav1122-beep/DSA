class Solution {
public:
    long long gcd (int a,int b){
        while(b != 0){
            int temp = b;
            b = a%b;
            a = temp;
        }
        return 1LL*a*a;
    }
   

    long long maxPairStrength(vector<int>& nums) {

        long long mx = 0;

        for(int i = 0; i < nums.size()-1; i++){
            for(int j = i+1; j < nums.size(); j++){
                long long mul = 1LL*nums[i]*nums[j];
                long long strength = (mul)/gcd(nums[i],nums[j]);
                if(mx < strength){
                    mx = strength;
                }
            }
        }
        return mx;
    }
};