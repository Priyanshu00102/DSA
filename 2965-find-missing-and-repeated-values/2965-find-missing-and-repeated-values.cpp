class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>v;
        vector<int>ans;
        for(int i=0; i<grid.size(); i++){
         for (int j = 0; j < grid.size(); j++) {
            v.push_back(grid[i][j]);
          }
        }
        sort(v.begin(),v.end());
        
        for(int i=1; i<v.size(); i++){
        
          if(v[i]==v[i-1]){
            ans.push_back(v[i]);
          }
        }
        int exp = 1;
for (int i = 0; i < v.size(); i++) {
    if (v[i] == exp) {
        exp++;
    }
    else if (v[i] > exp) {
        ans.push_back(exp);
        break;
    }
    // if(v[i] < exp) => duplicate, ignore
}

if (ans.size() == 1)
    ans.push_back(exp);
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna