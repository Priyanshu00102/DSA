class Solution {
public:
    bool isPalindrome(int x) {
     long long dup=x;
     long long rev=0;
     if(x<0) return false;
     
     while(x>0){
      int ld=x%10;
      rev=(rev*10)+ld;
      x=x/10;
     }  
     if(rev==dup) return true;
     else return false; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna