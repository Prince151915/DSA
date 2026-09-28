class Solution {
private:
    vector<int> entire_row(int row) {
        vector<int> temp;
        long long res = 1;
        temp.push_back(res);
        for (int i = 1; i < row; i++) {
            res = res * (row - i);
            res = res / i;
            temp.push_back(res);
        }
        return temp;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        for (int i = 1; i <= numRows; i++) {
            pascal.push_back(entire_row(i));
        }
        return pascal;
    }
};