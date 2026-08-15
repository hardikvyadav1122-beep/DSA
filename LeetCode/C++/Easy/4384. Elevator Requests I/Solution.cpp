class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int currfloor = 0;
        int totaltime = 0;
        for(int i = 0; i < requests.size(); i++){
            int nextfloor = requests[i];
            int time = nextfloor - currfloor;
            if(time < 0){
                time = -1*time;
            }
            totaltime += time;
            currfloor = nextfloor;
        }
        return totaltime;
    }
};