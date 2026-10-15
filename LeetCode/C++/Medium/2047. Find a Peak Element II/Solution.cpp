class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = m-1;

        while(low <= high){
            int mid = low + (high-low)/2;
            int maxcol = 0;
            for(int i = 0; i < n; i++){
                if(mat[mid][i] > mat[mid][maxcol]){
                    maxcol = i;
                }
            }

            int up = (mid > 0) ? mat[mid-1][maxcol] : -1;
            int down = (mid < m-1) ? mat[mid+1][maxcol] : -1;
            if(mat[mid][maxcol] > up && mat[mid][maxcol] > down ){
                return {mid,maxcol};
            }
            else if(mat[mid][maxcol] > up){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return {-1,-1};
    }
};