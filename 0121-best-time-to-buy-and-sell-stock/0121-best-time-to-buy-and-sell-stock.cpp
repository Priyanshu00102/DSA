class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit=0, buyday=INT_MAX;
        int n=arr.size();
        for(int i=0; i<n; i++){
          buyday=min(buyday,arr[i]);
          profit=max(profit,arr[i]-buyday);
        }
        return profit;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna