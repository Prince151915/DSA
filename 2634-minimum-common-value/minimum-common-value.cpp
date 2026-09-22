class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>mp;
        for(int i=0;i<nums1.size();i++){
            mp[nums1[i]]=1;
        }
        for(int i=0;i<nums2.size();i++){
            if(mp[nums2[i]]==1){
                mp[nums2[i]]=2;
            }
           else{
            continue;
           }
        }
        int output=-1;
        for(auto &i : mp){
            if(i.second>1){
                output=i.first;
                break;
            }
        }
        return output;
        
    }
};