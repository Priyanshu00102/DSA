class Solution {
  public:
    int findDiff(vector<int>& arr) {
        // code here
        int n=arr.size();
        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++){
            mpp[arr[i]]++;
        }
        int mini=INT_MAX,maxi=0;
        for(auto it:mpp){
            if(it.second<mini){
                mini=it.second;
            }
        }
         for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        int ans=maxi-mini;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna