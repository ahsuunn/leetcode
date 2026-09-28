class Solution:
    def uniqueOccurrences(self, arr: List[int]) -> bool:
        unique = list(set(arr))
        count = set()

        for val in unique:
            temp = arr.count(val)
            count.add(temp)
        return len(count) == len(unique)
            
