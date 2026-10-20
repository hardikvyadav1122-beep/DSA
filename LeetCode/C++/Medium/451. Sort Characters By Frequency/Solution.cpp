class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;

        for(auto ch : s){
            mpp[ch]++;
        }
        
        vector<vector<char>> bucket(s.size() + 1);

        for (auto it : mpp) {         
            bucket[it.second].push_back(it.first);
        }

        string res;

        for (int freq = s.size(); freq >= 1; freq--) {         
            for (char ch : bucket[freq]) {
                res.append(freq, ch);
            }
        }

        return res;
    }
};