class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int not_doing=0;
        for(int i=0;i<startTime.size();i++){
            if(startTime[i]<=queryTime && endTime[i]>=queryTime){
                not_doing++;
            }
        }
        return not_doing;
        
    }
};