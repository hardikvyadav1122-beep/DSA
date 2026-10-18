class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v(m*n);
        int k = 0;
        int i = 0;
        while(k < m*n){
            int j = i;
            while(j < n-i){
                v[k++] = matrix[i][j];
                j++;
            }
            int temp1 = i+1;
            while(temp1 < m-i){
                v[k++] = matrix[temp1][j-1];
                temp1++;
            }
            int temp2 = j-2;
            while(temp2 >= i){
              v[k++] = matrix[temp1-1][temp2];
              temp2--;
            }
            while(temp1 >= i+1){
                v[k++] = matrix[temp1-2][temp2+1];
                temp1--;
            }
            i++;
        }
        return v; 
    }
};