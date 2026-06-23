class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int st=0, end=arr.size()-1;
        while(st<end){
            swap(arr[st],arr[end]);
            st++;end--;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna