class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        s_length = len(s)
        vocab = {'a', 'e', 'i', 'o', 'u'}

        max = 0 

        current_strings = s[0:0+k]
        for char in current_strings:
            if char in vocab:
                max+=1
        
        i = k
        temp = max
        while i  < s_length and temp < k:
            if s[i] in vocab:
                temp += 1
            if s[i-k] in vocab:
                temp -= 1
            i += 1

            if temp > max:
                max = temp
        
        
        return max
