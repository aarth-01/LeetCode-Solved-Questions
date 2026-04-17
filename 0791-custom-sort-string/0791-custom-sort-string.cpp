class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>freq;
        string result = "";

        for(auto it: s){
            freq[it]++;
        }

        for(char x: order){
            if(freq.count(x)){
                result+= string(freq[x], x);
                freq.erase(x);
            }
        }

        for(auto it: freq){
            result+= string(it.second, it.first);
        }

        return result;
    }
};