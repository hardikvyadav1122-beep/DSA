class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
      
        for(int i = 0; i < 4; i++){
            int flag = 1;
            for(int j = 0; j < mat.size(); j++){
                for(int k = j; k < mat[0].size(); k++){
                    int temp = mat[j][k];
                    mat[j][k] = mat[k][j];
                    mat[k][j] = temp;
                }
                reverse(mat[j].begin(),mat[j].end());
            } 
            
            for(int j = 0; j < mat.size(); j++){
                for(int k = 0; k < mat[0].size(); k++){
                    if(mat[j][k] != target[j][k]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0){
                    break;
                }
            }
            if(flag){
                return true;
            }
        }
        return false;
    }
};