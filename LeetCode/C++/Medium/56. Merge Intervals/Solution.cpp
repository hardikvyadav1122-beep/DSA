class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> curr = intervals[0];
        
        vector<vector<int>> v;
        int k = 1;
        while(k < intervals.size()){
            vector<int> next = intervals[k++];
            if(curr[1] >= next[0]){
                curr[1] = max(curr[1],next[1]);
            }
            else{
                v.push_back(curr);
                curr = next;
            }
        }
        v.push_back(curr);
        return v;
    }
};