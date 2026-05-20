class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int> mpp;
        int count=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]==B[i]){
                mpp[A[i]]+=2;
                count++;
            }
            else{
                mpp[A[i]]++;
                mpp[B[i]]++;
                if(mpp[A[i]]==2){count++;}
                if(mpp[B[i]]==2){count++;}
            }
            A[i]=count;
        }
        return A;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna