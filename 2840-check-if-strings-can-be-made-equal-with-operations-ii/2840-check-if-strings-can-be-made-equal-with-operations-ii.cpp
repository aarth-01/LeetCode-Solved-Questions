class Solution {
public:
    bool checkStrings(string s1, string s2) {
        map<char,int>freq1,freq2, freq3, freq4;
        for(int i=0;i<s1.length();i++){
            if(i%2==0) freq2[s1[i]]++;
            else freq1[s1[i]]++;
        }

        for(int i=0;i<s2.length();i++){
            if(i%2==0) freq4[s2[i]]++;
            else freq3[s2[i]]++;
        }

        for(auto it:freq1){
            if(freq1[it.first]!=freq3[it.first]) return false;
        }
        for(auto it:freq2){
            if(freq2[it.first]!=freq4[it.first]) return false;
        }
        return true;


    }
};