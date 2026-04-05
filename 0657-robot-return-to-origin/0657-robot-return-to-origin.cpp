class Solution {
public:
    bool judgeCircle(string moves) {
        unordered_map<char, int> freq;

        for (auto it : moves)
            freq[it]++;
        if ((freq['U'] == freq['D']) && (freq['L'] == freq['R']))
            return true;
        else
            return false;
    }
};