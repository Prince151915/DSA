class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int f = target.size();
        int s = arr.size();

        int p = 0;
        int st = 0;
        int l = 0;

        while (p != f) {
            st = p;
            l = p;
            while (target[p] != arr[l]) {
                l++;
                if (l == s) {
                    return false;
                }
            }
            reverse(arr.begin() + st, arr.begin() + l + 1);
            p++;
        }
        return true;
    }
};