class Solution {
public:
bool canBloom(vector<int>& bloomDay,int mid,int k, int m){
    int cnt = 0;
    int bouquet = 0;
    for(int i = 0; i < bloomDay.size(); i++){
        if(bloomDay[i] <= mid){
            cnt++;
        }
        else {
            cnt = 0;
        }
        if(cnt == k){
            bouquet++;
            cnt = 0;
        }
    }
    return bouquet >= m;
}
    int minDays(vector<int>& bloomDay, int m, int k) {

        if((long long)m*k > bloomDay.size()){
            return -1;
        }

        int low = 1;
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low < high){
            int mid = low + (high-low)/2;
            if(canBloom(bloomDay,mid,k,m)){
                high = mid;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};