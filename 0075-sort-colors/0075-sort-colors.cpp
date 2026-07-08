class Solution {
public:
    void sortColors(vector<int>& arr) {
      int n=arr.size();
      int low=0,mid=0,high=n-1;
      while(mid<=high){
        if(arr[mid]==0){
          swap(arr[mid],arr[low]);
          low++;mid++;
        }
        else if(arr[mid]==1) mid++;
      
      else
      {
        swap(arr[mid],arr[high]);
        high--; 
      }
        
      }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna