class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int count=0;
        for(auto &i : mp){
            if(i.first==i.second){
                count=i.first;
            }
        }
        if(count==0){
            return -1;
        }
        return count;
    }
};