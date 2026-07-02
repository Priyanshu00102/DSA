class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int n=arr.size();
        vector<int>v(n,1);
        // prefix find o/p=[1,1,2,6]
        int prefix = 1;
        for(int i=0; i<n; i++)
        {
          v[i] = prefix;
          prefix = prefix * arr[i];
        }
        // suffix = [24,12,4,1] || ans = [24,12,8,6]
        int suffix=1;
        for(int i=n-1; i>=0; i--)
        {
          v[i] = suffix * v[i];
          suffix = suffix * arr[i];
        } 
      return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna