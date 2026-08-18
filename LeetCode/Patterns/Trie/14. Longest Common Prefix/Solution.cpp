class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s ="";
        sort(strs.begin(),strs.end());

        int n = strs.size();
        string start = strs[0], end = strs[n-1];
        for(int i = 0; i < min(start.size(),end.size()); i++){
            if(start[i] != end[i]){
                return s;
            }
            s += start[i];
        }
        return s;
    }
};