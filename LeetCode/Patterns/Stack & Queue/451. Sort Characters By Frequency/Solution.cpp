class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mpp;
        for(int i = 0; i < s.size(); i++){
            mpp[s[i]]++;
        }

        int maxfreq = 0;
        for(auto p : mpp){
            if(p.second > maxfreq){
                maxfreq = p.second;
            }
        }
        string res;
        for(int freq = maxfreq; freq >= 1; freq--){
            for(auto it : mpp){
                if(it.second == freq){
                    res.append(freq , it.first);
                }
            }
        }
        return res;
    }
};