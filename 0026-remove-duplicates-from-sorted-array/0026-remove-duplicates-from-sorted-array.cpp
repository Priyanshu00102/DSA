class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
// using loop--->>>
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++)
        {
          if(nums[i]!=nums[cnt])
          {
            cnt++;
            nums[cnt]=nums[i];
            
          }
        }  return cnt+1;

// using set--->>>>
        // set<int>st;
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //   st.insert(nums[i]);
        // }
        // int i=0;
        // for(auto it=st.begin() ; it!=st.end(); it++){
        //   nums[i]=*it;
        //   i++;
        // }
        // return st.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna