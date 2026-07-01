class Solution {
  public:
    string sortString(string &s) {
        // code here
        vector<int>alpha(26,0);
        for(int i=0; i<s.size(); i++){
            int index=s[i]-'a';
            alpha[index]++;
        }
        string ans;
        for(int i=0; i<26; i++){
            char c='a'+i;
            while(alpha[i]){
                ans+=c;
                alpha[i]--;
            }
        } return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna