class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1, n = 0, nLength = needle.length(), hayLength = haystack.length(), j;
        if(nLength > hayLength){
            return -1;
        }

        for(int i = 0; i < hayLength; i++){
            j = 0;
            while(j < nLength && haystack[i+j] == needle[j]){
                j++;
            }
            if(j == nLength){
                return i;
            }
        }
        return -1;
    }
};
