class Solution {
public:
    long long sumAndMultiply(int n) {
        int dup=n;
        long long rev=0;
  // reverse 10203004
        while(dup>0){
          int ld=dup%10;
          rev=rev*10+ld;
          dup/=10;
        }
  // reverse and remove zero and sum of digit
     int sum=0; long long non_zero=0;
     while(rev>0){
      int ld=rev%10;
      if(ld!=0)
      {
        non_zero=non_zero*10+ld;
        sum+=ld;
        
      }
      rev/=10;
     }
     long long ans=non_zero*sum;
     return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna