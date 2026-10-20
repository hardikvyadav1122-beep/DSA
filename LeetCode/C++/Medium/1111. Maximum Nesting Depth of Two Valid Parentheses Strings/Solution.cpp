class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> v(seq.size(),-1);
        int depth = 0;
        int maxcnt = 0;
        for(int i = 0; i < seq.size(); i++){
            if(seq[i] == '('){
                maxcnt++;
            }
        }
        int cntleft = maxcnt/2;
        int cntright = maxcnt/2;
        for(int i = 0; i < seq.size(); i++){
            if(seq[i] == '('){
                if(cntleft){
                    v[i] = 0;
                    cntleft--;
                }
                depth++;
            }
            else if(seq[i] == ')'){
                if(cntright){
                    if(depth <= cntright){
                        v[i] = 0;
                        cntright--;
                    }
                }
                depth--;
            }
        }
        for(int i = 0; i < seq.size(); i++){
            if(v[i] != 0){
                v[i] = 1;
            }
        }
        return v;
    }
};