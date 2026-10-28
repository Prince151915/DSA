class Solution {
public:
    vector<int> findPeaks(vector<int>& mountain) {
        int n=mountain.size();
        int arr[0];
        if(n==0)return {};
        if(n==1 || n==2)return {};
        vector<int>output;
        for(int i=1;i<n-1;i++){
            if(mountain[i]>mountain[i-1] &&mountain[i]>mountain[i+1]){
                output.push_back(i);
            }
        }
        return output;

        
    }
};