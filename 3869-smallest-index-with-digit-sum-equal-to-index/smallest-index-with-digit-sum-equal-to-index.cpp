class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        // intitalize temporary variable index for storing index whose digits sum  equals i index.
        int index=-1;
        for(int i=0;i<nums.size();i++){
            int temp=nums[i];
            // temporary digits_sum is calculated.
            int digit_sum=0;
            while(temp!=0){
                int digit=temp%10;
                digit_sum+=digit;
                temp=temp/10;
            }
            if(digit_sum==i){
                return i;
            }
        }
        return index;
        
    }
};