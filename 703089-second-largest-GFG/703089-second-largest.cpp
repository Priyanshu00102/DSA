class Solution {
  public:
  int secondlargest(vector<int> &arr , int n)
  {
      int largest=arr[0], sec_largest=-1;
      for(int i=1; i<n; i++)
      {
          if(arr[i]>largest)
          {
              sec_largest=largest;
              largest=arr[i];
          }
          else if(arr[i]>sec_largest && arr[i]!=largest)
          sec_largest=arr[i];
      }
      return sec_largest;
  }
    int getSecondLargest(vector<int> &arr) {
       
        return secondlargest(arr, arr.size());
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna