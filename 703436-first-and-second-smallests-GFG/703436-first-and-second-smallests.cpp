class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
      for(int i=0; i<arr.size(); i++){
          if(arr[0]!=arr[i]){
              return {arr[0],arr[i]};
          }
      } return {-1};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna