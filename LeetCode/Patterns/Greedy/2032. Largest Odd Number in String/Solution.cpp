class Solution {
public:
    string largestOddNumber(string num) {
        int odd;
        for(int i = num.size()-1; i >= 0; i--){
            int dig = num[i] - '0';
            if(dig%2 == 1){
                odd = i;
                break;
            }
        }
        num.resize(odd+1);
        return num;
    }
};