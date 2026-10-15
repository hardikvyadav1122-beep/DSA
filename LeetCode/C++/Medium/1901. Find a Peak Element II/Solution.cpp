class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = m-1;
        vector<int> v(2);

        while(low <= high){
            int mid = low + (high-low)/2;
            int maxcol = 0;
            for(int i = 0; i < n; i++){
                if(mat[mid][i] > mat[mid][maxcol]){
                    maxcol = i;
                }
            }
            if(mid == 0){
                if(mat[mid][maxcol] > mat[mid+1][maxcol]){
                    v[0] = mid;
                    v[1] = maxcol;
                    break;
                }
            }
            if(mid == m-1){
                if(mat[mid][maxcol] > mat[mid-1][maxcol]){
                    v[0] = mid;
                    v[1] = maxcol;
                    break;
                }
            }

            if(mat[mid][maxcol] > mat[mid-1][maxcol] && mat[mid][maxcol] > mat[mid+1][maxcol]){
                 v[0] = mid;
                 v[1] = maxcol;
                 break;
            }
            else if(mat[mid][maxcol] > mat[mid-1][maxcol]){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return v;
    }
};