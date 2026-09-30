class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> output;
        int n = prices.size();
        for (int i = 0; i < n; i++) {
            int final_price=prices[i];
            for (int j = i+1 ; j < n; j++) {
                if (prices[j] <=prices[i] ) {
                    final_price = prices[i] - prices[j];
                    break;
                } 
            }
            output.push_back(final_price);
        }
        return output;
    }
};