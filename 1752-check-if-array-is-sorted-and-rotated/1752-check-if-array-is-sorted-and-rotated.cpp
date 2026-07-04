class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0, n=nums.size();
        for(int i=1; i<n; i++)
        {
          if(nums[i]<nums[i-1]) cnt++;
        }
        if(nums[n-1]>nums[0]) cnt++;
        if(cnt>1) return false;
        return true;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna