class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxi=arr[0];
        for(int i=0; i<n; i++){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
            int sm=-1;
            for(int i=0; i<n; i++){
                if(arr[i]>sm && arr[i]<maxi){
                    sm=arr[i];
                }
              
            }
         return sm;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna