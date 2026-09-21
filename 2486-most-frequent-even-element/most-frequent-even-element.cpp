class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mp;
        // increment only those values which are only even in map.
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mp[nums[i]]++;
            }
        }

        int maxi = 0;
        // initialize maxi as 0 and store frequency of that element
        // which have highest frequency .

        for (auto& i : mp) {
            if (i.second > maxi) {
                maxi = i.second;
            }
        }

        // now return first starting  element we have frequency as same as maxi.
        for (auto& i : mp) {
            if (i.second == maxi) {
                return i.first;
            }
        }
        return -1;
    }
};