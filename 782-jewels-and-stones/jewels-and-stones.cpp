class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> mp;
        for (char i : stones) {
            mp[i]++;
        }
        int precious_stone = 0;
        for (int i = 0; i < jewels.length(); i++) {
            if (mp.find(jewels[i]) !=mp.end()){
                precious_stone+=mp[jewels[i]];
            }
            else{
                continue;
            }
        }
        return precious_stone;
    }
};