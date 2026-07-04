class Solution {
  public:
 vector<int> secondsmallest(vector<int> &arr, int n)
  {
      int small=arr[0], sec_small=INT_MAX;
      for(int i=1; i<n; i++){
          if(arr[i]<small)
          {
              sec_small=small;
              small=arr[i];
          }
          else if(arr[i]<sec_small && arr[i]!=small)
          sec_small=arr[i];
      }
      if(sec_small == INT_MAX)
            {
             return {-1};
            }
      return {small, sec_small};
     
  }
    vector<int> minAnd2ndMin(vector<int> &arr) {
        
        return secondsmallest(arr, arr.size());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna