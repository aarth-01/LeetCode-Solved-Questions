class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int col = encodedText.length()/rows;
        string result = "";

        if(rows==1) return encodedText;

        for(int i=0;i<col;i++){
            for(int j=i;j<encodedText.size();j= j+col+1){
                result+=encodedText[j];
            }
        }
        int i=0;
        for(i=result.size()-1;i>=0;i--){
            if(result[i]!=' ') break;

        }
        return result.substr(0,i+1);
        
    }
};