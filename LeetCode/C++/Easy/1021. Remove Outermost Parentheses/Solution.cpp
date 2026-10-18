class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string ans;
        for(auto i : s){
            if(i == ')'){
                cnt--;
            }
            if(cnt){
                ans.push_back(i);
            }
            if(i == '('){
                cnt++;
            }
        }
        return ans;
    }
};