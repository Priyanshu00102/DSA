class Solution {
public:
    int longestPalindrome(string s) {
      int cnt=0;
      bool odd=0;
        vector<int>upper(26,0);
        vector<int>lower(26,0);
        for(int i=0; i<s.size(); i++){
          if(s[i]>='a'){
          int index=s[i]-'a';
          lower[index]++;
          }
          else{
          int index1=s[i]-'A';
          upper[index1]++;
          }
        }
      for(int i=0; i<26; i++){
        if(lower[i]%2==0) cnt+=lower[i];
        else{
        cnt+=lower[i]-1;
        odd=1;
        }
        if(upper[i]%2==0){
          cnt+=upper[i];
        } else{
          cnt+=upper[i]-1;
          odd=1;
        }
      } 
      return cnt+odd;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna