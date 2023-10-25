class Solution(object):
    def kthGrammar(self, n, k):
        if n == 1: return 0
        parent = self.kthGrammar(n-1, k/2+k%2)
        isOdd = k%2

        if parent == 1:
            return 1 if isOdd else 0
        else:
            return 0 if isOdd else 1
        
        
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        