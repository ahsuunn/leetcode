class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int minLength = min(word1.length(), word2.length());
        string result("");
        for (int i = 0; i < minLength; i++){
            result.append(word1, 0, 1);
            word1.erase(0,1);
            result.append(word2,0,1);
            word2.erase(0,1);
        }

        while (word1.length() != 0){
            result.append(word1,0,1);
            word1.erase(0,1);
        }
        while (word2.length() != 0){
            result.append(word2,0,1);
            word2.erase(0,1);
        }

        return result;
    }
};
