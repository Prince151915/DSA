class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        // create map for analysing element having unique frequency in map.
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        // initialize sum as 0.
        int sum=0;
        for(auto &i : mp){
            if(i.second==1){
                sum+=i.first;
            }
        }
        return sum;
    }
};