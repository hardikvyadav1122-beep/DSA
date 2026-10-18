class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> v(m*n);
        int k = 0;
        int top = 0;
        int left = 0;
        int right = n-1;
        int bottom = m-1;
        while(left <= right && top <= bottom){
            for(int i = left; i <= right; i++){
                v[k++] = matrix[top][i];
            }
            top++;
            if(top > bottom) break;
            for(int i = top; i <= bottom; i++){
                v[k++] = matrix[i][right];
            }
            right--;
            if(left > right) break;
            for(int i = right; i >= left; i--){
                v[k++] = matrix[bottom][i];
            }
            bottom--;
            if(top > bottom) break;
            for(int i = bottom ; i >= top; i--){
                v[k++] = matrix[i][left];
            }
            left++;
        }
        return v;
    }
};