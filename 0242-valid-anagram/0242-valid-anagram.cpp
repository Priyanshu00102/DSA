class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(256,0);
        if(s.size()!=t.size()) return false;
        for(int i=0; i<s.size(); i++){
          v[s[i]]++;
          v[t[i]]--;
        }
        for(int i=0;i<v.size();i++){
          if(v[i]!=0) return false;
        } 
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna