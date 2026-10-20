class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }
        string check(s.size(),' ');
        for(int x = 0; x < s.size(); x++){
            for(int i = 0; i < s.size(); i++){
                check[i] = s[(i+x)%s.size()];
            }
            if( check == goal){
                return true;
            }
        }
        return false;
    }
};