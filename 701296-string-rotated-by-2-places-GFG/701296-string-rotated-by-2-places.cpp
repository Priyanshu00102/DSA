class Solution {
public:

    void clockwise(string &a) {
        int n = a.size();
        char c = a[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            a[i + 1] = a[i];
        }

        a[0] = c;
    }

    void anticlockwise(string &a) {
        int n = a.size();
        char c = a[0];

        for (int i = 0; i < n - 1; i++) {
            a[i] = a[i + 1];
        }

        a[n - 1] = c;
    }

    bool isRotated(string& s1, string& s2) {

        if (s1.size() != s2.size())
            return false;

        if (s1.size() <= 2)
            return s1 == s2;

        string a = s1;
        clockwise(a);
        clockwise(a);

        if (a == s2)
            return true;

        string b = s1;
        anticlockwise(b);
        anticlockwise(b);

        return b == s2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna