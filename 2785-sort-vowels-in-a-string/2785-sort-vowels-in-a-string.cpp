class Solution {
public:
    string sortVowels(string s) {
    // isma phela vowel find kya bad me sort krke put kr dya
    int n=s.size();
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0; i<n; i++)
    {
      if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
      {
        int index=s[i]-'a';
        lower[index]++;
        s[i]='#';
      }
      if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O' || s[i]=='U')
      {
        int index=s[i]-'A';
        upper[index]++;
        s[i]='#';
      }
    }
    string vowel;
    for(int i=0; i<26; i++)
    {
 
  // upper vowel
       char ch='A'+i;
      while(upper[i])
      {
        vowel+=ch;
        upper[i]--;
      }

    }
  // lower vowel
    for(int i=0; i<26; i++)
    {
       char ch='a'+i;
      while(lower[i])
      {
        vowel+=ch;
        lower[i]--;
      }


    }
    int first=0, second=0;
    while(first<n)
    {
      if(s[first]=='#')
      {
        s[first]=vowel[second];
        second++;
      }
      first++;
    }
  return s;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna