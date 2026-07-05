class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        set<int>st;
        for(int i=0;i<a.size();i++) st.insert(a[i]);
                for(int i=0;i<b.size();i++) st.insert(b[i]);
                vector<int>ans;
                for(auto it=st.begin(); it!=st.end(); it++){
                    ans.push_back(*it);
                    
                }
            return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna