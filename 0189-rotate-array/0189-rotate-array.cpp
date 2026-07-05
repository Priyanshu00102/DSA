class Solution {
public:
    void rotate(vector<int>& arr, int d) {
      
      int n=arr.size();
      d=d%n;
      d=n-d;
       vector<int>v;
       for(int i=0; i<d; i++)
       {
        v.push_back(arr[i]);
       } 
       for(int i=d; i<arr.size(); i++)
       {
        arr[i-d]=arr[i];
       }
       int j=0;
       for(int i=n-d; i<n; i++)
       {
        arr[i]=v[j];
        j++;
       }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna