class Solution {
public:
    bool isHappy(int n) {

        while (n != 1) {

            int ans = 0;

            while (n > 0) {
                int ld = n % 10;
                ans += ld * ld;
                n /= 10;
            }

            n = ans;

            if (n == 4)
                return false;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna