class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int maxi=(nums[i]-1)*(nums[j]-1);
                if( maxi >maximum){
                    maximum=maxi;
                }
            }
        }
        return maximum;
        
    }
};