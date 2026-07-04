class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=1; i<n; i++)
        {
            if(arr[i]<arr[i-1]){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna