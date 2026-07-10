class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> v;
        int n = arr.size();

        int maxi = arr[n - 1];
        v.push_back(maxi);

        for(int i = n - 2; i >= 0; i--) {
            if(arr[i] >= maxi) {   // >= because equal is also a leader
                maxi = arr[i];
                v.push_back(arr[i]);
            }
        }

        reverse(v.begin(), v.end());
        return v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna