class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n = s.length();
        int p = 0;
        int q = n - 1;
        while (p < q) {
            while(p<q && isalpha(s[p]) && isalpha(s[q])){
                swap(s[p], s[q]);
                p++;
                q--;
            }
            while(p<q && !isalpha(s[q]) ){
                q--;
            }
            while(p<q && !isalpha(s[p]) ){
                p++;
            }
        }
        return s;
    }
};