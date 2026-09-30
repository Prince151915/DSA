class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int sub=0;
        for(int i=0;i<k;i++){
            sub=sub+nums[i];
        }
        sum=sub;
        for(int i=k;i<nums.size();i++){
            sub=sub+nums[i]-nums[i-k];
            if(sub>sum){
                sum=sub;
            }
        }
        return (double)sum/k;
    }
};