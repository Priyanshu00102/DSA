class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int n = nums1.size(), m = nums2.size();
        int i = 0, j = 0;
        vector<int> ans;

        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            else {
                if (ans.empty() || ans.back() != nums1[i])
                    ans.push_back(nums1[i]);
                i++;
                j++;
            }
        }

        return ans;
    }
};


// // brute
// int n = nums1.size(), m = nums2.size();
// int count[1000] = {0};
// vector<int> v;
// vector<int> ans;

// // Find intersection
// for (int i = 0; i < n; i++) {
//     for (int j = 0; j < m; j++) {
//         if (nums1[i] == nums2[j] && count[j] == 0) {
//             v.push_back(nums1[i]);
//             count[j] = 1;
//             break;
//         }
//     }
// }

// // Remove duplicates
// for (int i = 0; i < v.size(); i++) {
//     bool duplicate = false;

//     for (int j = 0; j < i; j++) {
//         if (v[i] == v[j]) {
//             duplicate = true;
//             break;
//         }
//     }

//     if (!duplicate)
//         ans.push_back(v[i]);
// }

// return ans;
        
        

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna