class Solution {
public:
    int max_min(vector<int> & freq){
        int maxcnt = freq[0];
        int mincnt = INT_MAX;
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] > maxcnt){
                maxcnt = freq[i];
            }
        }
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] < mincnt && freq[i] > 0){
                mincnt = freq[i];
            }
        }
        return maxcnt-mincnt;
    }
    int beautySum(string s){
        int ans = 0;
        for(int i = 0; i < s.size(); i++){
        vector<int> freq(26,0);
            for(int j = i; j < s.size(); j++){
                freq[s[j]-'a']++;
                ans += max_min(freq);
            }
        }
        return ans;
    }
};