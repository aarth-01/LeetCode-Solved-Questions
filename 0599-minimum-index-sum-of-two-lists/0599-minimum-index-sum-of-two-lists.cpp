class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string,int>freq;
        int mini = INT_MAX;

        for(int i=0;i<list1.size();i++){
            if(!freq.count(list1[i])) freq[list1[i]] = i; 
        }
        for(int j=0; j<list2.size(); j++){
            if(freq.count(list2[j])){
                freq[list2[j]] += j;
                if(freq[list2[j]] <=mini) mini = freq[list2[j]];
            }
        }

        vector<string>vec;
        for(auto it: list2){
            if(freq.count(it) && freq[it]==mini) vec.push_back(it);
        }

        return vec;
    }
};