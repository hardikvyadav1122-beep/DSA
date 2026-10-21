class Solution {
public:
    int romanToInt(string s) {
        map<char,int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;
        
        int n = s.size();
        int sum = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(i != n){
                if(mpp[s[i]] < mpp[s[i+1]]){
                    sum -= mpp[s[i]];
                }
                else{
                    sum += mpp[s[i]];
                }
            }
            else{
                sum += mpp[s[i]];
            }
        }
        return sum;
    }
};