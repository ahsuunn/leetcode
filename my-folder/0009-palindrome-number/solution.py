class Solution:
    def isPalindrome(self, x: int) -> bool:
        tempX = str(x)
        X = list(tempX)
        if len(X) > 1 :
            
            while len(X) > 1:
                if X[0] == X[-1]:
                    X.pop(0)
                    X.pop(-1)
                else:
                    return False
            return True            
        else:
            return True
