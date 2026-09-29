class Solution {
public:
    int strStr(string haystack, string needle) {
        int p=0,q=0,r=0;
        while(p<haystack.size() && r+needle.size()<=haystack.size()){
            if(haystack[p]==needle[q] && q==needle.size()-1){
                return r;
            }
            if(haystack[p]!=needle[q]){
                r++;
                p=r;
                q=0;
            }
            else{
                p++;
                q++;
            }
        }
        return -1;
    }
};