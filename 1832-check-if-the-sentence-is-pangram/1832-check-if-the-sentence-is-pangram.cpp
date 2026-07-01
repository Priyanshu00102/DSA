class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>alpha(26,0);
        for(int i=0; i<sentence.size(); i++){
          int index=sentence[i]-'a';
          alpha[index]++;
        }
        for(int i=0; i<26; i++){
          if(alpha[i]==0) return false;
        } 
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna