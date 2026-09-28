class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        map<int,int>mp;
        int min_element=nums[0];
        int max_element=nums[0];

        for(int i=1;i<nums.size();i++){
            if(nums[i]<min_element){
                min_element=nums[i];
            }
            if(nums[i]>max_element){
                max_element=nums[i];
            }
        }
        for(int x : nums){
            mp[x]++;
        }

        vector<int>output;

        for(int i=min_element;i<max_element;i++){
            if(mp[i]==0){
                output.push_back(i);
            }
        }

        return output;
        
    }
};