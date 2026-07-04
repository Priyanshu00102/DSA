class Solution {
  public:
  int sl(vector<int> &arr){
      int n=arr.size();
      int lar=arr[0], slar=-1;
      for(int i=1; i<n; i++){
         if(arr[i] > lar){
    slar = lar;
    lar = arr[i];
}
else if(arr[i] < lar && arr[i] > slar){
    slar = arr[i];
}
      }
      return slar;
  }
    int getSecondLargest(vector<int> &arr) {
        // code here
        int ans= sl(arr);
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna