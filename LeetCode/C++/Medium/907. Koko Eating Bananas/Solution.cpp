class Solution {
public:
    bool canEAT(vector<int>& piles, int mid, int h){
        int actualhrs = 0;

        for(int i = 0; i < piles.size(); i++){
            actualhrs += piles[i]/mid;
            if(piles[i]%mid != 0){
                actualhrs++;
            }
        }
        return actualhrs <= h;
    }
   
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());

        while(low < high){
            int mid = low + (high-low)/2;
            if(canEAT(piles,mid,h)){
                high = mid;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};