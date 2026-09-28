class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for(int i = s.length() - 1; i >= 0; i-- ){
            if(s.back() == ' '){
                s.pop_back();
            }
            else {
                break;
            }
        }

        for (int i = 0; i < s.length(); i++){
            string substr = s.substr(i, s.length());
            if (!substr.contains(' ')){
                return length = substr.length();
            }
        }
        return length;
    }
};
