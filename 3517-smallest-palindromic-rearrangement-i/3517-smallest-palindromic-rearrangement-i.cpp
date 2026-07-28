class Solution {
public:
    string smallestPalindrome(string s) {
        int chars[26] = {0};
        string result = "";
        char centre = '1';
        for(auto it: s) chars[it-'a']++;

        for(int i=0; i<26;i++){
            if(chars[i]>0){
                result.append(chars[i]/2, i +'a');
                if(chars[i]%2!=0){
                    centre = i + 'a';
                }
            }
        }
        string rev = result;
        reverse(rev.begin(), rev.end());
        if(centre=='1') return result + rev;
        else return result+ centre + rev;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna