class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;
        for (int i = 0; i < arr1.size(); i++) {
            mp[arr1[i]]++;
        }
        int j = 0;
        for (int i = 0; i < arr2.size(); i++) {
            int c = mp[arr2[i]];
            while (c > 0) {
                arr1[j] = arr2[i];
                c--;
                j++;
                mp[arr2[i]]--;
            }
        }
        for (int i = 0; i < mp.size(); i++) {
            if (mp[i] > 0) {
                while (mp[i] > 0) {
                    arr1[j] = i;
                    mp[i]--;
                    j++;
                }
            }
        }
        return arr1;
    }
};