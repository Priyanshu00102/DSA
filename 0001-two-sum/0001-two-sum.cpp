class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0; i<n; i++){
          mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
          int need=target-nums[i];
          if(mpp.find(need)!=mpp.end()&&mpp[need]!=i){
            return {i,mpp[need]};
          }
        }return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna