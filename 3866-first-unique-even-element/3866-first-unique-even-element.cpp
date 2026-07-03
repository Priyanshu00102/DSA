class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0; i<n; i++)
        {
        int cnt=0;
          if(nums[i]%2==0)
          {
            for(int j=0; j<n; j++)
            {
              if(nums[i]==nums[j])
              {
                cnt++;
              }
            }
            if(cnt==1)
            {
              return nums[i];
            }
          }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna