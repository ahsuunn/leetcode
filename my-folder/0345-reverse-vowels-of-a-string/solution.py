class Solution:
    def reverseVowels(self, s: str) -> str:
        s_lower = s.lower()
        s_list = list(s)
        vocab = ['a', 'e', 'i', 'o', 'u']
        vow = []
        idx = []
        for i in range(len(s)):
            if s_lower[i] in vocab:
                vow.append(s[i])
                idx.append(i)

        vow_reversed = vow[::-1]
        vow_reversed = list(vow_reversed)
        for i in range (len(vow)):
            s_list[idx[i]] = vow_reversed[i] 
        return "".join(s_list)
