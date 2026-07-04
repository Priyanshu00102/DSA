class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      vector<int>v;
      int n=nums1.size();
      for(int i=0; i<n; i++)
      {
        v.push_back(nums1[i]);
      } 
      int m=nums2.size(); 
       for(int i=0; i<m; i++)
      {
        v.push_back(nums2[i]);
      }  
      sort(v.begin(),v.end());
      int size=v.size();
      
      if(size%2==1){
        return v[size/2.0];
      }
      else
      return (v[(size/2)]+v[(size/2)-1])/2.0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna